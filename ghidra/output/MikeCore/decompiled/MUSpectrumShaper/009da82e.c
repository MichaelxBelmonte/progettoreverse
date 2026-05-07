// Function: FUN_009da82e
// Address: 009da82e
// Size: 612 bytes
// Class: MUSpectrumShaper
// String references:
//   "A regular expression cannot start with the alternation operator |."


ulonglong FUN_009da82e(undefined8 param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  void *pvVar4;
  byte *pbVar5;
  longlong lVar6;
  void *pvVar7;
  undefined7 uVar9;
  ulonglong uVar8;
  longlong lVar10;
  longlong *unaff_RDI;
  void *pvVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte local_58 [24];
  longlong local_40;
  longlong local_38;
  
  if ((((int *)unaff_RDI[2] == (int *)0x0) || (*(int *)unaff_RDI[2] == 0)) &&
     ((*(uint *)(*unaff_RDI + 0x28) & 0x1000003) != 0)) {
    lVar12 = unaff_RDI[0x11];
    lVar6 = unaff_RDI[0xf];
    pbVar5 = local_58;
    FUN_009d5ed0();
    FUN_009d8cfc(pbVar5,lVar12 - lVar6);
    if ((local_58[0] & 1) != 0) {
      operator_delete(pbVar5);
    }
    uVar8 = 0;
  }
  else {
    if (*(uint *)(unaff_RDI + 0x13) < *(uint *)(unaff_RDI + 0x12)) {
      *(uint *)(unaff_RDI + 0x13) = *(uint *)(unaff_RDI + 0x12);
    }
    if (-1 < *(int *)((longlong)unaff_RDI + 0x94)) {
      *(int *)(unaff_RDI + 0x12) = *(int *)((longlong)unaff_RDI + 0x94);
    }
    unaff_RDI[0x11] = unaff_RDI[0x11] + 1;
    lVar2 = FUN_009d8a9c(param_1,0x18);
    lVar12 = *(longlong *)(*unaff_RDI + 0x160);
    lVar3 = FUN_009dcfc8(0x120,0x11);
    lVar6 = *unaff_RDI;
    lVar10 = ((*(longlong *)(lVar6 + 0x168) - *(longlong *)(lVar6 + 0x160)) + 7U &
             0xfffffffffffffff8) + *(longlong *)(lVar6 + 0x160);
    *(longlong *)(lVar6 + 0x168) = lVar10;
    *(longlong *)(lVar3 + 0x10) = lVar10 - lVar3;
    lVar6 = *(longlong *)(*unaff_RDI + 0x168) - *(longlong *)(*unaff_RDI + 0x160);
    unaff_RDI[0x15] = lVar6;
    if ((char)unaff_RDI[0x16] != '\0') {
      lVar3 = unaff_RDI[3];
      lVar6 = FUN_009d8a9c(lVar6,0x18);
      *(char *)(lVar6 + 0x10) = (char)lVar3;
    }
    lVar12 = (lVar2 - lVar12) + 0x120;
    plVar1 = (longlong *)unaff_RDI[0x18];
    uVar9 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (plVar1 == (longlong *)unaff_RDI[0x19]) {
      lVar6 = unaff_RDI[0x17];
      pvVar11 = (void *)((longlong)plVar1 - lVar6);
      lVar2 = (longlong)pvVar11 >> 3;
      uVar8 = lVar2 + 1;
      if (uVar8 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar3 = unaff_RDI[0x19] - lVar6;
      uVar13 = lVar3 >> 2;
      if (uVar13 < uVar8) {
        uVar13 = uVar8;
      }
      pvVar7 = (void *)0xfffffffffffffff;
      if (0xffffffffffffffe < (ulonglong)(lVar3 >> 3)) {
        uVar13 = 0x1fffffffffffffff;
      }
      if (uVar13 == 0) {
        pvVar4 = (void *)0x0;
      }
      else {
        local_40 = lVar6;
        local_38 = lVar2;
        if (0x1fffffffffffffff < uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_009d5f52();
        }
        pvVar4 = operator_new(0xffffffff);
        lVar2 = local_38;
        lVar6 = local_40;
      }
      lVar2 = (longlong)pvVar4 + lVar2 * 8 + 8;
      *(longlong *)(lVar2 + -8) = lVar12;
      if (0 < (longlong)pvVar11) {
        _memcpy(pvVar7,pvVar11,(size_t)lVar6);
      }
      unaff_RDI[0x17] = (longlong)pvVar4;
      unaff_RDI[0x18] = lVar2;
      unaff_RDI[0x19] = (longlong)((longlong)pvVar4 + uVar13 * 8);
      uVar8 = CONCAT71(uVar9,1);
      if (lVar6 != 0) {
        operator_delete(pvVar7);
      }
    }
    else {
      *plVar1 = lVar12;
      unaff_RDI[0x18] = (longlong)(plVar1 + 1);
      uVar8 = CONCAT71(uVar9,1);
    }
  }
  return uVar8 & 0xffffffff;
}


