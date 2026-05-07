// Function: FUN_00ef8b0e
// Address: 00ef8b0e
// Size: 758 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AudioUnit.framework/Versions/A/AudioUnit"


ulonglong FUN_00ef8b0e(void *param_1,longlong param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  int unaff_ESI;
  longlong unaff_RDI;
  undefined8 uVar7;
  int local_e0;
  int local_cc;
  
  _memcpy(param_1,section_000000b8.segname + 8,param_3);
  lVar4 = *(longlong *)(unaff_RDI + 0xe60);
  uVar2 = *(undefined8 *)(unaff_RDI + 0xe68);
  uVar1 = *(undefined4 *)(unaff_RDI + 0xe70);
  if ((*(longlong *)(unaff_RDI + 0xe38) != 0) && (*(longlong *)(unaff_RDI + 0xe50) == 0)) {
    lVar3 = _ZSTD_createCDict_advanced2(*(undefined4 *)(unaff_RDI + 0xe48),1,unaff_RDI + 0x10);
    *(longlong *)(unaff_RDI + 0xe50) = lVar3;
    if (lVar3 == 0) {
      return 0xffffffffffffffc0;
    }
    *(longlong *)(unaff_RDI + 0xe58) = lVar3;
  }
  *(undefined8 *)(unaff_RDI + 0xe60) = 0;
  *(undefined8 *)(unaff_RDI + 0xe68) = 0;
  *(undefined8 *)(unaff_RDI + 0xe70) = 0;
  lVar3 = *(longlong *)(unaff_RDI + 0xe58);
  if (unaff_ESI == 2) {
    *(longlong *)(unaff_RDI + 0x2e0) = param_2 + 1;
  }
  if (lVar4 == 0) {
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(lVar3 + 8);
      uVar6 = *(longlong *)(unaff_RDI + 0x2e0) - 1;
      goto LAB_00ef8c34;
    }
    uVar6 = *(longlong *)(unaff_RDI + 0x2e0) - 1;
    uVar5 = 0;
  }
  else {
    uVar6 = *(longlong *)(unaff_RDI + 0x2e0) - 1;
    uVar5 = uVar2;
    if (lVar3 != 0) {
LAB_00ef8c34:
      uVar7 = 1;
      if (*(int *)(lVar3 + 0xf4) != 0) goto LAB_00ef8c88;
      if ((uVar6 == 0xffffffffffffffff) ||
         (uVar6 <= *(ulonglong *)(&DAT_023e29d0 + (ulonglong)*(uint *)(lVar3 + 0x180) * 8))) {
        if (local_cc != 2) goto LAB_00ef8c7c;
      }
      else if (local_cc == 1) {
LAB_00ef8c7c:
        if (local_e0 == 0) goto LAB_00ef8c88;
      }
    }
  }
  uVar7 = 0;
LAB_00ef8c88:
  _ZSTD_getCParamsFromCCtxParams(uVar5,uVar6,uVar7);
  lVar4 = *(longlong *)(unaff_RDI + 0x2e0);
  uVar6 = FUN_00ef667c(uVar1,uVar2,0,*(undefined8 *)(unaff_RDI + 0xe58));
  if (uVar6 < 0xffffffffffffff89) {
    *(undefined8 *)(unaff_RDI + 0xdc8) = 0;
    *(undefined8 *)(unaff_RDI + 0xdd0) = 0;
    if (*(int *)(unaff_RDI + 0x15c) == 0) {
      lVar4 = (ulonglong)(*(longlong *)(unaff_RDI + 0x2d8) == lVar4 + -1) +
              *(longlong *)(unaff_RDI + 0x2d8);
    }
    else {
      lVar4 = 0;
    }
    *(longlong *)(unaff_RDI + 0xdd8) = lVar4;
    *(undefined8 *)(unaff_RDI + 0xdf0) = 0;
    *(undefined8 *)(unaff_RDI + 0xdf8) = 0;
    *(undefined8 *)(unaff_RDI + 0xe00) = 1;
    uVar6 = 0;
  }
  return uVar6;
}


