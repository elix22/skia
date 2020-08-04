R"SKSL(
// defines built-in functions supported by SkSL when running on a GPU

$genType radians($genType degrees);
$genType sin($genType angle);
$genType cos($genType angle);
$genType tan($genType angle);
$genType asin($genType x);
$genType acos($genType x);
$genType atan($genType y, $genType x);
$genType atan($genType y_over_x);
$genType sinh($genType x);
$genType cosh($genType x);
$genType tanh($genType x);
$genType asinh($genType x);
$genType acosh($genType x);
$genType atanh($genType x);
$genType pow($genType x, $genType y);
$genType exp($genType x);
$genType log($genType x);
$genType exp2($genType x);
$genType log2($genType x);
$genType sqrt($genType x);
$genHType radians($genHType degrees);
$genHType sin($genHType angle);
$genHType cos($genHType angle);
$genHType tan($genHType angle);
$genHType asin($genHType x);
$genHType acos($genHType x);
$genHType atan($genHType y, $genHType x);
$genHType atan($genHType y_over_x);
$genHType sinh($genHType x);
$genHType cosh($genHType x);
$genHType tanh($genHType x);
$genHType asinh($genHType x);
$genHType acosh($genHType x);
$genHType atanh($genHType x);
$genHType pow($genHType x, $genHType y);
$genHType exp($genHType x);
$genHType log($genHType x);
$genHType exp2($genHType x);
$genHType log2($genHType x);
$genHType sqrt($genHType x);
$genType inversesqrt($genType x);
$genType abs($genType x);
$genHType abs($genHType x);
$genIType abs($genIType x);
$genType sign($genType x);
$genHType sign($genHType x);
$genIType sign($genIType x);
$genType floor($genType x);
$genHType floor($genHType x);
$genType trunc($genType x);
$genHType trunc($genHType x);
$genType round($genType x);
$genHType round($genHType x);
$genType roundEven($genType x);
$genHType roundEven($genHType x);
$genType ceil($genType x);
$genHType ceil($genHType x);
$genType fract($genType x);
$genHType fract($genHType x);
$genType mod($genType x, float y);
$genType mod($genType x, $genType y);
$genHType mod($genHType x, half y);
$genHType mod($genHType x, $genHType y);
$genType modf($genType x, out $genType i);
$genHType modf($genHType x, out $genHType i);
$genType min($genType x, $genType y);
$genType min($genType x, float y);
$genHType min($genHType x, $genHType y);
$genHType min($genHType x, half y);
$genIType min($genIType x, $genIType y);
$genIType min($genIType x, int y);
$genType max($genType x, $genType y);
$genType max($genType x, float y);
$genHType max($genHType x, $genHType y);
$genHType max($genHType x, half y);
$genIType max($genIType x, $genIType y);
$genIType max($genIType x, int y);
$genType clamp($genType x, $genType minVal, $genType maxVal);
$genType clamp($genType x, float minVal, float maxVal);
$genHType clamp($genHType x, $genHType minVal, $genHType maxVal);
$genHType clamp($genHType x, half minVal, half maxVal);
$genIType clamp($genIType x, $genIType minVal, $genIType maxVal);
$genIType clamp($genIType x, int minVal, int maxVal);
$genType saturate($genType x);
$genHType saturate($genHType x);
$genType mix($genType x, $genType y, $genType a);
$genType mix($genType x, $genType y, float a);
$genHType mix($genHType x, $genHType y, $genHType a);
$genHType mix($genHType x, $genHType y, half a);
$genType mix($genType x, $genType y, $genBType a);
$genHType mix($genHType x, $genHType y, $genBType a);
$genIType mix($genIType x, $genIType y, $genBType a);
$genBType mix($genBType x, $genBType y, $genBType a);
$genType step($genType edge, $genType x);
$genType step(float edge, $genType x);
$genHType step($genHType edge, $genHType x);
$genHType step(half edge, $genHType x);
$genType smoothstep($genType edge0, $genType edge1, $genType x);
$genType smoothstep(float edge0, float edge1, $genType x);
$genHType smoothstep($genHType edge0, $genHType edge1, $genHType x);
$genHType smoothstep(half edge0, half edge1, $genHType x);
$genBType isnan($genType x);
$genBType isinf($genType x);
$genIType floatBitsToInt($genType value);
$genType intBitsTofloat($genIType value);
$genType uintBitsTofloat($genUType value);
$genType fma($genType a, $genType b, $genType c);
$genHType fma($genHType a, $genHType b, $genHType c);
sk_has_side_effects $genType frexp($genType x, out $genIType exp);
$genType ldexp($genType x, in $genIType exp);
uint packUnorm2x16(float2 v);
uint packSnorm2x16(float2 v);
uint packUnorm4x8(float4 v);
uint packSnorm4x8(float4 v);
float2 unpackUnorm2x16(uint p);
float2 unpackSnorm2x16(uint p);
float4 unpackUnorm4x8(uint p);
float4 unpackSnorm4x8(uint p);
uint packHalf2x16(float2 v);
float2 unpackHalf2x16(uint v);
float length($genType x);
half length($genHType x);
float distance($genType p0, $genType p1);
half distance($genHType p0, $genHType p1);
float dot($genType x, $genType y);
half dot($genHType x, $genHType y);
float3 cross(float3 x, float3 y);
half3 cross(half3 x, half3 y);
$genType normalize($genType x);
$genHType normalize($genHType x);
float4 ftransform();
$genType faceforward($genType N, $genType I, $genType Nref);
$genHType faceforward($genHType N, $genHType I, $genHType Nref);
$genType reflect($genType I, $genType N);
$genHType reflect($genHType I, $genHType N);
$genType refract($genType I, $genType N, float eta);
$genHType refract($genHType I, $genHType N, float eta);
$mat matrixCompMult($mat x, $mat y);
float2x2 outerProduct(float2 c, float2 r);
float3x3 outerProduct(float3 c, float3 r);
float4x3 outerProduct(float4 c, float4 r);
float2x3 outerProduct(float3 c, float2 r);
float3x2 outerProduct(float2 c, float3 r);
float2x4 outerProduct(float4 c, float2 r);
float4x2 outerProduct(float2 c, float4 r);
float3x4 outerProduct(float4 c, float3 r);
float4x3 outerProduct(float3 c, float4 r);
half2x2 outerProduct(half2 c, half2 r);
half3x3 outerProduct(half3 c, half3 r);
half4x3 outerProduct(half4 c, half4 r);
half2x3 outerProduct(half3 c, half2 r);
half3x2 outerProduct(half2 c, half3 r);
half2x4 outerProduct(half4 c, half2 r);
half4x2 outerProduct(half2 c, half4 r);
half3x4 outerProduct(half4 c, half3 r);
half4x3 outerProduct(half3 c, half4 r);
float2x2 transpose(float2x2 m);
float3x3 transpose(float3x3 m);
float4x4 transpose(float4x4 m);
float2x3 transpose(float3x2 m);
float3x2 transpose(float2x3 m);
float2x4 transpose(float4x2 m);
float4x2 transpose(float2x4 m);
float3x4 transpose(float4x3 m);
float4x3 transpose(float3x4 m);
half2x2 transpose(half2x2 m);
half3x3 transpose(half3x3 m);
half4x4 transpose(half4x4 m);
half2x3 transpose(half3x2 m);
half3x2 transpose(half2x3 m);
half2x4 transpose(half4x2 m);
half4x2 transpose(half2x4 m);
half3x4 transpose(half4x3 m);
half4x3 transpose(half3x4 m);
float determinant(float2x2 m);
float determinant(float3x3 m);
float determinant(float4x4 m);
half determinant(half2x2 m);
half determinant(half3x3 m);
half determinant(half4x4 m);
float2x2 inverse(float2x2 m);
float3x3 inverse(float3x3 m);
float4x4 inverse(float4x4 m);
half2x2 inverse(half2x2 m);
half3x3 inverse(half3x3 m);
half4x4 inverse(half4x4 m);
$bvec lessThan($vec x, $vec y);
$bvec lessThan($hvec x, $hvec y);
$bvec lessThan($ivec x, $ivec y);
$bvec lessThan($svec x, $svec y);
$bvec lessThan($usvec x, $usvec y);
$bvec lessThan($uvec x, $uvec y);
$bvec lessThanEqual($vec x, $vec y);
$bvec lessThanEqual($hvec x, $hvec y);
$bvec lessThanEqual($ivec x, $ivec y);
$bvec lessThanEqual($uvec x, $uvec y);
$bvec lessThanEqual($svec x, $svec y);
$bvec lessThanEqual($usvec x, $usvec y);
$bvec greaterThan($vec x, $vec y);
$bvec greaterThan($hvec x, $hvec y);
$bvec greaterThan($ivec x, $ivec y);
$bvec greaterThan($uvec x, $uvec y);
$bvec greaterThan($svec x, $svec y);
$bvec greaterThan($usvec x, $usvec y);
$bvec greaterThanEqual($vec x, $vec y);
$bvec greaterThanEqual($hvec x, $hvec y);
$bvec greaterThanEqual($ivec x, $ivec y);
$bvec greaterThanEqual($uvec x, $uvec y);
$bvec greaterThanEqual($svec x, $svec y);
$bvec greaterThanEqual($usvec x, $usvec y);
$bvec equal($vec x, $vec y);
$bvec equal($hvec x, $hvec y);
$bvec equal($ivec x, $ivec y);
$bvec equal($uvec x, $uvec y);
$bvec equal($svec x, $svec y);
$bvec equal($usvec x, $usvec y);
$bvec equal($bvec x, $bvec y);
$bvec notEqual($vec x, $vec y);
$bvec notEqual($hvec x, $hvec y);
$bvec notEqual($ivec x, $ivec y);
$bvec notEqual($uvec x, $uvec y);
$bvec notEqual($svec x, $svec y);
$bvec notEqual($usvec x, $usvec y);
$bvec notEqual($bvec x, $bvec y);
bool any($bvec x);
bool all($bvec x);
$bvec not($bvec x);

$genIType bitCount($genIType value);
$genIType bitCount($genUType value);
$genIType findLSB($genIType value);
$genIType findLSB($genUType value);
$genIType findMSB($genIType value);
$genIType findMSB($genUType value);

sampler2D makeSampler2D(texture2D texture, sampler sampler);
int2 textureSize($gsampler2DRect sampler);

half4 sample($gsampler1D sampler, float P);
half4 sample($gsampler1D sampler, float P, float bias);
half4 sample($gsampler2D sampler, float2 P);
// The above currently only expand to handle the float/fixed case. So we also declare this integer
// version of sample().
int4 sample(isampler2D sampler, float2 P);
half4 sample(samplerExternalOES sampler, float2 P, float bias);
half4 sample(samplerExternalOES sampler, float2 P);

half4 sample($gsampler2DRect sampler, float2 P);
half4 sample($gsampler2DRect sampler, float3 P);

// Currently we do not support the generic types of loading subpassInput so we have some explicit
// versions that we currently use
float4 subpassLoad(subpassInput subpass);
float4 subpassLoad(subpassInputMS subpass, int sample);

half4 sample($gsampler1D sampler, float2 P);
half4 sample($gsampler1D sampler, float2 P, float bias);
half4 sample($gsampler2D sampler, float3 P);
half4 sample($gsampler2D sampler, float3 P, float bias);

float4 imageLoad(image2D image, int2 P);
int4 imageLoad(iimage2D image, int2 P);
$genType dFdx($genType p);
$genType dFdy($genType p);
$genHType dFdx($genHType p);
$genHType dFdy($genHType p);
$genType fwidth($genType p);
$genHType fwidth($genHType p);
float interpolateAtSample(float interpolant, int sample);
float2 interpolateAtSample(float2 interpolant, int sample);
float3 interpolateAtSample(float3 interpolant, int sample);
float4 interpolateAtSample(float4 interpolant, int sample);
float interpolateAtOffset(float interpolant, float2 offset);
float2 interpolateAtOffset(float2 interpolant, float2 offset);
float3 interpolateAtOffset(float3 interpolant, float2 offset);
float4 interpolateAtOffset(float4 interpolant, float2 offset);

// Definitions of functions implementing all of the SkBlendMode blends.

half4 blend_clear(half4 src, half4 dst) { return half4(0); }

half4 blend_src(half4 src, half4 dst) { return src; }

half4 blend_dst(half4 src, half4 dst) { return dst; }

half4 blend_src_over(half4 src, half4 dst) { return src + (1 - src.a)*dst; }

half4 blend_dst_over(half4 src, half4 dst) { return (1 - dst.a)*src + dst; }

half4 blend_src_in(half4 src, half4 dst) {
    @if (sk_Caps.inBlendModesFailRandomlyForAllZeroVec) {
        if (src == half4(0)) {
            return half4(0);
        }
    }
    return src*dst.a;
}

half4 blend_dst_in(half4 src, half4 dst) { return blend_src_in(dst, src); }

half4 blend_src_out(half4 src, half4 dst) { return (1 - dst.a)*src; }

half4 blend_dst_out(half4 src, half4 dst) { return (1 - src.a)*dst; }

half4 blend_src_atop(half4 src, half4 dst) { return dst.a*src + (1 - src.a)*dst; }

half4 blend_dst_atop(half4 src, half4 dst)  { return  (1 - dst.a) * src + src.a*dst; }

half4 blend_xor(half4 src, half4 dst) { return (1 - dst.a)*src + (1 - src.a)*dst; }

half4 blend_plus(half4 src, half4 dst) { return min(src + dst, 1); }

half4 blend_modulate(half4 src, half4 dst) { return src*dst; }

half4 blend_screen(half4 src, half4 dst) { return src + (1 - src)*dst; }

half _blend_overlay_component(half sc, half sa, half dc, half da) {
    if (2*dc <= da) {
        return 2*sc*dc;
    }
    return sa*da - 2*(da - dc)*(sa - sc);
}

half4 blend_overlay(half4 src, half4 dst) {
     half4 result = half4(_blend_overlay_component(src.r, src.a, dst.r, dst.a),
                          _blend_overlay_component(src.g, src.a, dst.g, dst.a),
                          _blend_overlay_component(src.b, src.a, dst.b, dst.a),
                           src.a + (1 - src.a)*dst.a);
    result.rgb += dst.rgb*(1 - src.a) + src.rgb*(1 - dst.a);
    return result;
}

half4 blend_darken(half4 src, half4 dst) {
   half4 result = blend_src_over(src, dst);
   result.rgb = min(result.rgb, (1 - dst.a)*src.rgb + dst.rgb);
   return result;
}

half4 blend_lighten(half4 src, half4 dst) {
    half4 result = blend_src_over(src, dst);
    result.rgb = max(result.rgb, (1 - dst.a)*src.rgb + dst.rgb);
    return result;
}

half _guarded_divide(half n, half d) {
    @if (sk_Caps.mustGuardDivisionEvenAfterExplicitZeroCheck) {
        return n/(d + 0.00000001);
    } else {
        return n/d;
    }
}

half _color_dodge_component(half sc, half sa, half dc, half da) {
    if (dc == 0) {
        return sc*(1 - da);
    } else {
        half d = sa - sc;
        if (d == 0) {
             return sa*da + sc*(1 - da) + dc*(1 - sa);
        }
        d = min(da, _guarded_divide(dc*sa, d));
        return d*sa + sc*(1 - da) + dc*(1 - sa);
    }
}

half4 blend_color_dodge(half4 src, half4 dst) {
    return half4(_color_dodge_component(src.r, src.a, dst.r, dst.a),
                 _color_dodge_component(src.g, src.a, dst.g, dst.a),
                 _color_dodge_component(src.b, src.a, dst.b, dst.a),
                 src.a + (1 - src.a)*dst.a);
}

half _color_burn_component(half sc, half sa, half dc, half da) {
    if (da == dc) {
        return sa*da + sc*(1 - da) + dc*(1 - sa);
    } else if (sc == 0) {
        return dc*(1 - sa);
    }
    half d = max(0, da - _guarded_divide((da - dc)*sa, sc));
    return d*sa + sc*(1 - da) + dc*(1 - sa);
}

half4 blend_color_burn(half4 src, half4 dst) {
    return half4(_color_burn_component(src.r, src.a, dst.r, dst.a),
                 _color_burn_component(src.g, src.a, dst.g, dst.a),
                 _color_burn_component(src.b, src.a, dst.b, dst.a),
                 src.a + (1 - src.a)*dst.a);
}

half4 blend_hard_light(half4 src, half4 dst) { return blend_overlay(dst, src); }

half _soft_light_component(half sc, half sa, half dc, half da) {
    if (2*sc <= sa) {
        return _guarded_divide(dc*dc*(sa - 2*sc), da) + (1 - da)*sc + dc*(-sa + 2*sc + 1);
    } else if (4.0 * dc <= da) {
        half DSqd = dc*dc;
        half DCub = DSqd*dc;
        half DaSqd = da*da;
        half DaCub = DaSqd*da;
        return _guarded_divide(DaSqd*(sc - dc*(3*sa - 6*sc - 1)) + 12*da*DSqd*(sa - 2*sc)
                               - 16*DCub * (sa - 2*sc) - DaCub*sc, DaSqd);
    }
    return dc*(sa - 2*sc + 1) + sc - sqrt(da*dc)*(sa - 2*sc) - da*sc;
}

half4 blend_soft_light(half4 src, half4 dst) {
    if (dst.a == 0) {
        return src;
    }
    return half4(_soft_light_component(src.r, src.a, dst.r, dst.a),
                 _soft_light_component(src.g, src.a, dst.g, dst.a),
                 _soft_light_component(src.b, src.a, dst.b, dst.a),
                 src.a + (1 - src.a)*dst.a);
}

half4 blend_difference(half4 src, half4 dst) {
    return half4(src.rgb + dst.rgb - 2*min(src.rgb*dst.a, dst.rgb*src.a),
                 src.a + (1 - src.a)*dst.a);
}

half4 blend_exclusion(half4 src, half4 dst) {
    return half4(dst.rgb + src.rgb - 2*dst.rgb*src.rgb, src.a + (1 - src.a)*dst.a);
}

half4 blend_multiply(half4 src, half4 dst) {
    return half4((1 - src.a)*dst.rgb + (1 - dst.a)*src.rgb + src.rgb*dst.rgb,
                 src.a + (1 - src.a)*dst.a);
}

half _blend_color_luminance(half3 color) { return dot(half3(0.3, 0.59, 0.11), color); }

half3 _blend_set_color_luminance(half3 hueSatColor, half alpha, half3 lumColor) {
    half lum = _blend_color_luminance(lumColor);
    half3 result = lum - _blend_color_luminance(hueSatColor) + hueSatColor;
    half minComp = min(min(result.r, result.g), result.b);
    half maxComp = max(max(result.r, result.g), result.b);
    if (minComp < 0 && lum != minComp) {
        result = lum + (result - lum) * lum/(lum - minComp);
    }
    if (maxComp > alpha && maxComp != lum) {
        return lum + ((result - lum) * (alpha - lum))/(maxComp - lum);
    }
    return result;
}

half _blend_color_saturation(half3 color) {
    return max(max(color.r, color.g), color.b) - min(min(color.r, color.g), color.b);
}

half3 _blend_set_color_saturation_helper(half3 minMidMax, half sat) {
    if (minMidMax.r < minMidMax.b) {
        return half3(0, sat*(minMidMax.g - minMidMax.r)/(minMidMax.b - minMidMax.r), sat);
    }
    return half3(0);
}

half3 _blend_set_color_saturation(half3 hueLumColor, half3 satColor) {
    half sat = _blend_color_saturation(satColor);
    if (hueLumColor.r <= hueLumColor.g) {
        if (hueLumColor.g <= hueLumColor.b) {
            hueLumColor.rgb = _blend_set_color_saturation_helper(hueLumColor.rgb, sat);
        } else if (hueLumColor.r <= hueLumColor.b) {
            hueLumColor.rbg = _blend_set_color_saturation_helper(hueLumColor.rbg, sat);
        } else {
            hueLumColor.brg = _blend_set_color_saturation_helper(hueLumColor.brg, sat);
        }
    } else if (hueLumColor.r <= hueLumColor.b) {
       hueLumColor.grb = _blend_set_color_saturation_helper(hueLumColor.grb, sat);
    } else if (hueLumColor.g <= hueLumColor.b) {
       hueLumColor.gbr = _blend_set_color_saturation_helper(hueLumColor.gbr, sat);
    } else {
       hueLumColor.bgr = _blend_set_color_saturation_helper(hueLumColor.bgr, sat);
    }
    return hueLumColor;
}

half4 blend_hue(half4 src, half4 dst) {
    half alpha = dst.a*src.a;
    half3 sda = src.rgb*dst.a;
    half3 dsa = dst.rgb*src.a;
    return half4(_blend_set_color_luminance(_blend_set_color_saturation(sda, dsa), alpha, dsa) +
                 dst.rgb - dsa + src.rgb - sda,
                 src.a + dst.a - alpha);
}

half4 blend_saturation(half4 src, half4 dst) {
    half alpha = dst.a*src.a;
    half3 sda = src.rgb*dst.a;
    half3 dsa = dst.rgb*src.a;
    return half4(_blend_set_color_luminance(_blend_set_color_saturation(dsa, sda), alpha, dsa) +
                 dst.rgb - dsa + src.rgb - sda,
                 src.a + dst.a - alpha);
}

half4 blend_color(half4 src, half4 dst)  {
    half alpha = dst.a*src.a;
    half3 sda = src.rgb*dst.a;
    half3 dsa = dst.rgb*src.a;
    return half4(_blend_set_color_luminance(sda, alpha, dsa) + dst.rgb - dsa + src.rgb - sda,
                 src.a + dst.a - alpha);
}

half4 blend_luminosity(half4 src, half4 dst) {
    half alpha = dst.a*src.a;
    half3 sda = src.rgb*dst.a;
    half3 dsa = dst.rgb*src.a;
    return half4(_blend_set_color_luminance(dsa, alpha, sda) + dst.rgb - dsa + src.rgb - sda,
                 src.a + dst.a - alpha);

}

enum class SkBlendMode {
    kClear      = 0,
    kSrc        = 1,
    kDst        = 2,
    kSrcOver    = 3,
    kDstOver    = 4,
    kSrcIn      = 5,
    kDstIn      = 6,
    kSrcOut     = 7,
    kDstOut     = 8,
    kSrcATop    = 9,
    kDstATop    = 10,
    kXor        = 11,
    kPlus       = 12,
    kModulate   = 13,
    kScreen     = 14,
    kOverlay    = 15,
    kDarken     = 16,
    kLighten    = 17,
    kColorDodge = 18,
    kColorBurn  = 19,
    kHardLight  = 20,
    kSoftLight  = 21,
    kDifference = 22,
    kExclusion  = 23,
    kMultiply   = 24,
    kHue        = 25,
    kSaturation = 26,
    kColor      = 27,
    kLuminosity = 28
};

half4 blend(SkBlendMode mode, half4 src, half4 dst) {
    switch (mode) {
        case SkBlendMode::kClear:      return blend_clear(src, dst);
        case SkBlendMode::kSrc:        return blend_src(src, dst);
        case SkBlendMode::kDst:        return blend_dst(src, dst);
        case SkBlendMode::kSrcOver:    return blend_src_over(src, dst);
        case SkBlendMode::kDstOver:    return blend_dst_over(src, dst);
        case SkBlendMode::kSrcIn:      return blend_src_in(src, dst);
        case SkBlendMode::kDstIn:      return blend_dst_in(src, dst);
        case SkBlendMode::kSrcOut:     return blend_src_out(src, dst);
        case SkBlendMode::kDstOut:     return blend_dst_out(src, dst);
        case SkBlendMode::kSrcATop:    return blend_src_atop(src, dst);
        case SkBlendMode::kDstATop:    return blend_dst_atop(src, dst);
        case SkBlendMode::kXor:        return blend_xor(src, dst);
        case SkBlendMode::kPlus:       return blend_plus(src, dst);
        case SkBlendMode::kModulate:   return blend_modulate(src, dst);
        case SkBlendMode::kScreen:     return blend_screen(src, dst);
        case SkBlendMode::kOverlay:    return blend_overlay(src, dst);
        case SkBlendMode::kDarken:     return blend_darken(src, dst);
        case SkBlendMode::kLighten:    return blend_lighten(src, dst);
        case SkBlendMode::kColorDodge: return blend_color_dodge(src, dst);
        case SkBlendMode::kColorBurn:  return blend_color_burn(src, dst);
        case SkBlendMode::kHardLight:  return blend_hard_light(src, dst);
        case SkBlendMode::kSoftLight:  return blend_soft_light(src, dst);
        case SkBlendMode::kDifference: return blend_difference(src, dst);
        case SkBlendMode::kExclusion:  return blend_exclusion(src, dst);
        case SkBlendMode::kMultiply:   return blend_multiply(src, dst);
        case SkBlendMode::kHue:        return blend_hue(src, dst);
        case SkBlendMode::kSaturation: return blend_saturation(src, dst);
        case SkBlendMode::kColor:      return blend_color(src, dst);
        case SkBlendMode::kLuminosity: return blend_luminosity(src, dst);
    }
    return half4(0);  // Avoids "'blend' can exit without returning a value."
}

// The max() guards against division by zero when the incoming color is transparent black
half4 unpremul(half4 color) { return half4(color.rgb / max(color.a, 0.0001), color.a); }
float4 unpremul_float(float4 color) { return float4(color.rgb / max(color.a, 0.0001), color.a); }

float2 proj(float3 p) { return p.xy / p.z; }
)SKSL";