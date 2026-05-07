// Function: FUN_00efbf4f
// Address: 00efbf4f
// Size: 1138 bytes
// Class: Unknown


ulonglong FUN_00efbf4f(undefined4 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  void *pvVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined8 in_RCX;
  longlong lVar5;
  uint uVar6;
  undefined *unaff_RSI;
  longlong lVar7;
  longlong unaff_RDI;
  longlong lVar8;
  uint *puVar9;
  size_t sVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined4 extraout_XMM0_Da;
  
  if (param_2 < 7) {
    if (*(uint *)(unaff_RDI + 0xfc) < 7) {
      _ZSTD_ldm_skipSequences(in_RCX,*(undefined4 *)(unaff_RDI + 0xf4));
    }
    else {
      _ZSTD_ldm_skipRawSeqStoreBytes();
    }
    return 1;
  }
  *(undefined8 *)(unaff_RDI + 0x3b8) = *(undefined8 *)(unaff_RDI + 0x3b0);
  *(undefined8 *)(unaff_RDI + 0x3a8) = *(undefined8 *)(unaff_RDI + 0x3a0);
  *(undefined4 *)(unaff_RDI + 1000) = 0;
  lVar7 = *(longlong *)(unaff_RDI + 0xc68);
  *(longlong *)(unaff_RDI + 0xd60) = lVar7;
  *(undefined4 *)(unaff_RDI + 0xd68) = *(undefined4 *)(unaff_RDI + 0x128);
  uVar4 = (int)unaff_RSI - *(int *)(unaff_RDI + 0xc80);
  if (*(int *)(unaff_RDI + 0xca4) + 0x180U < uVar4) {
    uVar6 = (uVar4 - *(int *)(unaff_RDI + 0xca4)) - 0x180;
    if (0xbf < uVar6) {
      uVar6 = 0xc0;
    }
    *(uint *)(unaff_RDI + 0xca4) = uVar4 - uVar6;
  }
  lVar12 = 1;
  if (*(uint *)(unaff_RDI + 0xc90) <= *(uint *)(unaff_RDI + 0xc94)) {
    if (*(longlong *)(unaff_RDI + 0xd70) == 0) {
      lVar12 = 0;
    }
    else {
      lVar12 = 3 - (ulonglong)(*(int *)(*(longlong *)(unaff_RDI + 0xd70) + 0x8c) == 0);
    }
  }
  lVar8 = *(longlong *)(unaff_RDI + 0xc70);
  lVar5 = 0;
  do {
    *(undefined4 *)(&DAT_000015f0 + lVar5 * 4 + lVar8) =
         *(undefined4 *)(&DAT_000015f0 + lVar5 * 4 + lVar7);
    lVar5 = lVar5 + 1;
  } while (lVar5 != 3);
  if (*(ulonglong *)(unaff_RDI + 0xc48) < *(ulonglong *)(unaff_RDI + 0xc58)) {
    if (*(int *)(unaff_RDI + 0x198) != 0) {
      return 0xffffffffffffffd7;
    }
    sVar10 = *(size_t *)(unaff_RDI + 0x170);
  }
  else {
    if (*(int *)(unaff_RDI + 0x140) != 1) {
      if (*(int *)(unaff_RDI + 0x198) == 0) {
        uVar4 = *(int *)(unaff_RDI + 0xfc) - 3;
        puVar11 = (undefined8 *)(&DAT_02593690 + (ulonglong)uVar4 * 8 + lVar12 * 0x18);
        if (*(int *)(unaff_RDI + 0x170) != 1) {
          puVar11 = (undefined8 *)
                    (&DAT_02593550 + (longlong)*(int *)(unaff_RDI + 0xfc) * 8 + lVar12 * 0x50);
        }
        if (2 < uVar4) {
          puVar11 = (undefined8 *)
                    (&DAT_02593550 + (longlong)*(int *)(unaff_RDI + 0xfc) * 8 + lVar12 * 0x50);
        }
        *(undefined8 *)(unaff_RDI + 0xd98) = 0;
      }
      else {
        uVar1 = (**(code **)(&DAT_00001458 + unaff_RDI))
                          (param_1,*(undefined8 *)(&DAT_00001468 + unaff_RDI),param_2,0);
        uVar3 = 0xffffffffffffff96;
        param_1 = extraout_XMM0_Da;
        if (uVar1 - 1 < *(ulonglong *)(&DAT_00001468 + unaff_RDI)) {
          lVar7 = *(longlong *)(&DAT_00001460 + unaff_RDI);
          lVar8 = (uVar1 - 1) * 0x10;
          if ((*(int *)(lVar7 + lVar8) != 0) || (*(int *)(lVar7 + 8 + lVar8) != 0)) {
            if (uVar1 == *(ulonglong *)(&DAT_00001468 + unaff_RDI)) goto LAB_00efc2cb;
            param_1 = 0;
            puVar11 = (undefined8 *)(lVar7 + uVar1 * 0x10);
            *puVar11 = 0;
            puVar11[1] = 0;
            uVar1 = uVar1 + 1;
          }
          uVar3 = uVar1;
          if (uVar3 < 0xffffffffffffff89) {
            if (uVar3 == 0) {
              lVar7 = 0;
              lVar12 = 0;
            }
            else {
              puVar9 = (uint *)(*(longlong *)(&DAT_00001460 + unaff_RDI) + 8);
              lVar12 = 0;
              lVar7 = 0;
              uVar1 = uVar3;
              do {
                lVar12 = lVar12 + (ulonglong)puVar9[-1];
                lVar7 = lVar7 + (ulonglong)*puVar9;
                puVar9 = puVar9 + 4;
                uVar1 = uVar1 - 1;
              } while (uVar1 != 0);
            }
            if (param_2 < (ulonglong)(lVar7 + lVar12)) {
              return 0xffffffffffffff95;
            }
            uVar1 = _ZSTD_copySequencesToSeqStoreExplicitBlockDelim(uVar3);
            if (0xffffffffffffff88 < uVar1) {
              return uVar1;
            }
            *(undefined8 *)(unaff_RDI + 0xd98) = 0;
            return 0;
          }
        }
LAB_00efc2cb:
        if (*(int *)(unaff_RDI + 0x194) == 0) {
          return uVar3;
        }
        uVar4 = *(int *)(unaff_RDI + 0xfc) - 3;
        puVar11 = (undefined8 *)(&DAT_02593690 + (ulonglong)uVar4 * 8 + lVar12 * 0x18);
        if (*(int *)(unaff_RDI + 0x170) != 1) {
          puVar11 = (undefined8 *)
                    (&DAT_02593550 + (longlong)*(int *)(unaff_RDI + 0xfc) * 8 + lVar12 * 0x50);
        }
        if (2 < uVar4) {
          puVar11 = (undefined8 *)
                    (&DAT_02593550 + (longlong)*(int *)(unaff_RDI + 0xfc) * 8 + lVar12 * 0x50);
        }
        *(undefined8 *)(unaff_RDI + 0xd98) = 0;
        lVar8 = *(longlong *)(unaff_RDI + 0xc70);
      }
      pvVar2 = (void *)(*(code *)*puVar11)(param_1,&DAT_000015f0 + lVar8);
      sVar10 = (size_t)param_2;
      goto LAB_00efc341;
    }
    if (*(int *)(unaff_RDI + 0x198) != 0) {
      return 0xffffffffffffffd7;
    }
    uVar1 = _ZSTD_ldm_generateSequences
                      (0,unaff_RDI + 0x140,param_2,param_4,*(undefined8 *)(unaff_RDI + 0xc30),0,0,0,
                       *(undefined8 *)(unaff_RDI + 0xc38));
    if (0xffffffffffffff88 < uVar1) {
      return uVar1;
    }
    lVar8 = *(longlong *)(unaff_RDI + 0xc70);
    sVar10 = *(size_t *)(unaff_RDI + 0x170);
  }
  unaff_RSI = &DAT_000015f0 + lVar8;
  pvVar2 = (void *)_ZSTD_ldm_blockCompress(unaff_RSI,unaff_RDI + 0x3a0);
LAB_00efc341:
  _memcpy(unaff_RSI,pvVar2,sVar10);
  *(longlong *)(unaff_RDI + 0x3b8) = *(longlong *)(unaff_RDI + 0x3b8) + (longlong)pvVar2;
  return 0;
}


