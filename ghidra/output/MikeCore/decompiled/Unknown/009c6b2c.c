// Function: FUN_009c6b2c
// Address: 009c6b2c
// Size: 594 bytes
// Class: Unknown


void FUN_009c6b2c(longlong param_1,uint param_2,ulonglong param_3,longlong *param_4)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  ulonglong *unaff_RSI;
  uint uVar7;
  longlong *unaff_RDI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  uVar6 = ((param_3 & 0xffffffff) - (ulonglong)param_2) + (param_1 - (longlong)unaff_RSI) * 8;
  if ((longlong)uVar6 < 1) {
    uVar4 = *(uint *)(param_4 + 1);
  }
  else {
    if (param_2 == 0) {
      uVar4 = *(uint *)(param_4 + 1);
    }
    else {
      uVar4 = 0x40 - param_2;
      uVar12 = (ulonglong)uVar4;
      if ((longlong)uVar6 <= (longlong)(ulonglong)uVar4) {
        uVar12 = uVar6;
      }
      bVar3 = (byte)param_2;
      uVar11 = ((0xffffffffffffffffU >> ((char)uVar4 - (char)uVar12 & 0x3fU)) >> (bVar3 & 0x3f)) <<
               (bVar3 & 0x3f) & *unaff_RSI;
      uVar4 = *(uint *)(param_4 + 1);
      bVar2 = (byte)uVar4;
      uVar9 = uVar11 << (-(bVar3 - bVar2) & 0x3f);
      if (uVar4 <= param_2) {
        uVar9 = uVar11 >> (bVar3 - bVar2 & 0x3f);
      }
      uVar7 = 0x40 - uVar4;
      uVar10 = uVar12;
      if (uVar7 < uVar12) {
        uVar10 = (ulonglong)uVar7;
      }
      puVar5 = (ulonglong *)*param_4;
      *puVar5 = (((0xffffffffffffffffU >> ((char)uVar7 - (char)uVar10 & 0x3fU)) >> (bVar2 & 0x3f))
                 << (bVar2 & 0x3f) ^ 0xffffffffffffffff) & *puVar5 | uVar9;
      puVar5 = puVar5 + (uVar4 + uVar10 >> 6);
      *param_4 = (longlong)puVar5;
      uVar4 = uVar4 + (int)uVar10 & 0x3f;
      *(uint *)(param_4 + 1) = uVar4;
      lVar8 = uVar12 - uVar10;
      if (0 < lVar8) {
        uVar4 = (uint)lVar8;
        *puVar5 = uVar11 >> ((char)uVar10 + bVar3 & 0x3f) |
                  (0xffffffffffffffffU >> (-(char)lVar8 & 0x3fU) ^ 0xffffffffffffffff) & *puVar5;
        *(uint *)(param_4 + 1) = uVar4;
      }
      uVar6 = uVar6 - uVar12;
      unaff_RSI = unaff_RSI + 1;
    }
    bVar2 = (byte)uVar4;
    uVar12 = -1L << (bVar2 & 0x3f);
    uVar7 = 0x40 - uVar4;
    if (0x3f < (longlong)uVar6) {
      puVar5 = (ulonglong *)*param_4;
      uVar9 = *puVar5;
      uVar11 = uVar6;
      do {
        uVar6 = *unaff_RSI;
        *puVar5 = uVar6 << (bVar2 & 0x3f) | uVar9 & ~uVar12;
        uVar9 = uVar6 >> ((byte)uVar7 & 0x3f) | puVar5[1] & uVar12;
        puVar5[1] = uVar9;
        puVar5 = puVar5 + 1;
        unaff_RSI = unaff_RSI + 1;
        uVar6 = uVar11 - 0x40;
        bVar1 = 0x7f < (longlong)uVar11;
        uVar11 = uVar6;
      } while (bVar1);
      *param_4 = (longlong)puVar5;
    }
    if (0 < (longlong)uVar6) {
      uVar11 = (*unaff_RSI << (-(char)uVar6 & 0x3fU)) >> (-(char)uVar6 & 0x3fU);
      uVar9 = (ulonglong)uVar7;
      if ((longlong)uVar6 <= (longlong)(ulonglong)uVar7) {
        uVar9 = uVar6;
      }
      bVar3 = (byte)uVar7 - (byte)uVar9;
      puVar5 = (ulonglong *)*param_4;
      *puVar5 = uVar11 << (bVar2 & 0x3f) | ~((uVar12 << (bVar3 & 0x3f)) >> (bVar3 & 0x3f)) & *puVar5
      ;
      puVar5 = puVar5 + (uVar4 + uVar9 >> 6);
      *param_4 = (longlong)puVar5;
      uVar4 = uVar4 + (int)uVar9 & 0x3f;
      *(uint *)(param_4 + 1) = uVar4;
      lVar8 = uVar6 - uVar9;
      if (lVar8 != 0 && (longlong)uVar9 <= (longlong)uVar6) {
        uVar4 = (uint)lVar8;
        *puVar5 = uVar11 >> ((byte)uVar9 & 0x3f) |
                  (0xffffffffffffffffU >> (-(char)lVar8 & 0x3fU) ^ 0xffffffffffffffff) & *puVar5;
        *(uint *)(param_4 + 1) = uVar4;
      }
    }
  }
  *unaff_RDI = *param_4;
  *(uint *)(unaff_RDI + 1) = uVar4;
  return;
}


