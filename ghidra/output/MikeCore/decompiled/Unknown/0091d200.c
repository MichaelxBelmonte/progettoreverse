// Function: FUN_0091d200
// Address: 0091d200
// Size: 603 bytes
// Class: Unknown


void FUN_0091d200(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  ulonglong *puVar7;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  
  puVar7 = (ulonglong *)*unaff_RSI;
  uVar5 = *(uint *)(unaff_RSI + 1);
  uVar8 = ((ulonglong)*(uint *)(param_2 + 1) + (*param_2 - (longlong)puVar7) * 8) - (ulonglong)uVar5
  ;
  if ((longlong)uVar8 < 1) {
    uVar5 = *(uint *)(param_1 + 1);
  }
  else {
    if (uVar5 == 0) {
      uVar5 = *(uint *)(param_1 + 1);
    }
    else {
      uVar4 = 0x40 - uVar5;
      uVar12 = (ulonglong)uVar4;
      if ((longlong)uVar8 <= (longlong)(ulonglong)uVar4) {
        uVar12 = uVar8;
      }
      bVar3 = (byte)uVar5;
      uVar11 = ((0xffffffffffffffffU >> ((char)uVar4 - (char)uVar12 & 0x3fU)) >> (bVar3 & 0x3f)) <<
               (bVar3 & 0x3f) & *puVar7;
      uVar4 = *(uint *)(param_1 + 1);
      bVar2 = (byte)uVar4;
      uVar9 = uVar11 << (bVar2 - bVar3 & 0x3f);
      if (uVar4 <= uVar5) {
        uVar9 = uVar11 >> (-(bVar2 - bVar3) & 0x3f);
      }
      uVar5 = 0x40 - uVar4;
      uVar10 = uVar12;
      if (uVar5 < uVar12) {
        uVar10 = (ulonglong)uVar5;
      }
      puVar7 = (ulonglong *)*param_1;
      *puVar7 = (((0xffffffffffffffffU >> ((char)uVar5 - (char)uVar10 & 0x3fU)) >> (bVar2 & 0x3f))
                 << (bVar2 & 0x3f) ^ 0xffffffffffffffff) & *puVar7 | uVar9;
      puVar7 = puVar7 + (uVar4 + uVar10 >> 6);
      *param_1 = (longlong)puVar7;
      uVar5 = uVar4 + (int)uVar10 & 0x3f;
      *(uint *)(param_1 + 1) = uVar5;
      lVar6 = uVar12 - uVar10;
      if (0 < lVar6) {
        uVar5 = (uint)lVar6;
        *puVar7 = uVar11 >> ((char)uVar10 + (char)(int)unaff_RSI[1] & 0x3fU) |
                  (0xffffffffffffffffU >> (-(char)lVar6 & 0x3fU) ^ 0xffffffffffffffff) & *puVar7;
        *(uint *)(param_1 + 1) = uVar5;
      }
      uVar8 = uVar8 - uVar12;
      puVar7 = (ulonglong *)(*unaff_RSI + 8);
      *unaff_RSI = (longlong)puVar7;
    }
    bVar2 = (byte)uVar5;
    uVar12 = -1L << (bVar2 & 0x3f);
    uVar4 = 0x40 - uVar5;
    if (0x3f < (longlong)uVar8) {
      uVar9 = uVar8;
      do {
        uVar8 = *puVar7;
        puVar7 = (ulonglong *)*param_1;
        *puVar7 = uVar8 << (bVar2 & 0x3f) | *puVar7 & ~uVar12;
        *param_1 = (longlong)(puVar7 + 1);
        puVar7[1] = uVar8 >> ((byte)uVar4 & 0x3f) | puVar7[1] & uVar12;
        puVar7 = (ulonglong *)(*unaff_RSI + 8);
        *unaff_RSI = (longlong)puVar7;
        uVar8 = uVar9 - 0x40;
        bVar1 = 0x7f < (longlong)uVar9;
        uVar9 = uVar8;
      } while (bVar1);
    }
    if (0 < (longlong)uVar8) {
      uVar11 = (*puVar7 << (-(char)uVar8 & 0x3fU)) >> (-(char)uVar8 & 0x3fU);
      uVar9 = (ulonglong)uVar4;
      if ((longlong)uVar8 <= (longlong)(ulonglong)uVar4) {
        uVar9 = uVar8;
      }
      bVar3 = (byte)uVar4 - (byte)uVar9;
      puVar7 = (ulonglong *)*param_1;
      *puVar7 = uVar11 << (bVar2 & 0x3f) | ~((uVar12 << (bVar3 & 0x3f)) >> (bVar3 & 0x3f)) & *puVar7
      ;
      puVar7 = puVar7 + (uVar5 + uVar9 >> 6);
      *param_1 = (longlong)puVar7;
      uVar5 = uVar5 + (int)uVar9 & 0x3f;
      *(uint *)(param_1 + 1) = uVar5;
      lVar6 = uVar8 - uVar9;
      if (lVar6 != 0 && (longlong)uVar9 <= (longlong)uVar8) {
        uVar5 = (uint)lVar6;
        *puVar7 = uVar11 >> ((byte)uVar9 & 0x3f) |
                  (0xffffffffffffffffU >> (-(char)lVar6 & 0x3fU) ^ 0xffffffffffffffff) & *puVar7;
        *(uint *)(param_1 + 1) = uVar5;
      }
    }
  }
  *unaff_RDI = *param_1;
  *(uint *)(unaff_RDI + 1) = uVar5;
  return;
}


