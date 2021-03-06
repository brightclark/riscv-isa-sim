// vfwcvt.xu.f.v vd, vs2, vm
VI_CHECK_DSS(false);
if (P.VU.vsew == e32)
  require(p->supports_extension('D'));

VI_VFP_LOOP_BASE
  auto vs2 = P.VU.elt<float32_t>(rs2_num, i);
  P.VU.elt<uint64_t>(rd_num, i, true) = f32_to_ui64(vs2, softfloat_round_minMag, true);
  set_fp_exceptions;
VI_VFP_LOOP_WIDE_END
