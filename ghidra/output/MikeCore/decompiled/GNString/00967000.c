// Function: FUN_00967000
// Address: 00967000
// Size: 926 bytes
// Class: GNString


void FUN_00967000(void)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint *local_60;
  int local_4c;
  uint local_48 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  uVar9 = *(uint *)(unaff_RDI + 0xc) ^ *unaff_RSI;
  uVar10 = *(uint *)(unaff_RDI + 0x10) ^ unaff_RSI[1];
  uVar11 = *(uint *)(unaff_RDI + 0x14) ^ unaff_RSI[2];
  uVar12 = *(uint *)(unaff_RDI + 0x18) ^ unaff_RSI[3];
  uVar3 = *(uint *)(unaff_RDI + 0x1c);
  uVar6 = (ulonglong)(uVar9 & 0xff);
  local_78 = uVar9;
  uStack_74 = uVar10;
  uStack_70 = uVar11;
  uStack_6c = uVar12;
  if (*(int *)(unaff_RDI + 4) < 2) {
    puVar8 = &local_78;
    local_60 = local_48;
    uVar4 = 4;
  }
  else {
    local_4c = 1;
    lVar5 = 0xb;
    local_60 = local_48;
    puVar7 = &local_78;
    uVar4 = uVar9;
    uVar2 = uVar10;
    uVar1 = uVar11;
    do {
      puVar8 = local_60;
      uVar9 = uVar3 ^ *(uint *)(&DAT_023c6a30 + uVar6 * 4) ^
              *(uint *)(&DAT_023c6e30 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_023c7230 + (ulonglong)(uVar1 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_023c7630 + (ulonglong)(uVar12 >> 0x18) * 4);
      local_60 = puVar7;
      *puVar8 = uVar9;
      uVar10 = *(uint *)(&DAT_023c6a30 + (ulonglong)(uVar2 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -0xc + lVar5 * 4) ^
               *(uint *)(&DAT_023c6e30 + (ulonglong)(uVar1 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c7230 + (ulonglong)(uVar12 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c7630 + (ulonglong)(uVar4 >> 0x18) * 4);
      puVar8[1] = uVar10;
      uVar11 = *(uint *)(&DAT_023c6a30 + (ulonglong)(uVar1 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -8 + lVar5 * 4) ^
               *(uint *)(&DAT_023c6e30 + (ulonglong)(uVar12 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c7230 + (ulonglong)(uVar4 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c7630 + (ulonglong)(uVar2 >> 0x18) * 4);
      puVar8[2] = uVar11;
      uVar12 = *(uint *)(&DAT_023c6a30 + (ulonglong)(uVar12 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -4 + lVar5 * 4) ^
               *(uint *)(&DAT_023c6e30 + (ulonglong)(uVar4 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c7230 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c7630 + (ulonglong)(uVar1 >> 0x18) * 4);
      puVar8[3] = uVar12;
      local_4c = local_4c + 1;
      uVar3 = *(uint *)(unaff_RDI + lVar5 * 4);
      uVar6 = (ulonglong)(uVar9 & 0xff);
      lVar5 = lVar5 + 4;
      puVar7 = puVar8;
      uVar4 = uVar9;
      uVar2 = uVar10;
      uVar1 = uVar11;
    } while (local_4c < *(int *)(unaff_RDI + 4));
    uVar6 = (ulonglong)(uVar9 & 0xff);
    uVar4 = (int)lVar5 - 7;
  }
  *local_60 = (uint)(byte)(&DAT_023c6730)[uVar12 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar11 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar10 >> 8) & 0xff] << 8 ^
              (byte)(&DAT_023c6730)[uVar6] ^ uVar3;
  puVar7 = local_60;
  local_60[1] = (uint)(byte)(&DAT_023c6730)[uVar9 >> 0x18] << 0x18 ^
                (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar12 >> 0x10) & 0xff] << 0x10 ^
                (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar11 >> 8) & 0xff] << 8 ^
                (uint)(byte)(&DAT_023c6730)[(ulonglong)uVar10 & 0xff] ^
                *(uint *)(unaff_RDI + 0xc + (ulonglong)(uVar4 | 1) * 4);
  puVar7[2] = (uint)(byte)(&DAT_023c6730)[uVar10 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar9 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar12 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)uVar11 & 0xff] ^
              *(uint *)(unaff_RDI + 0xc + (ulonglong)(uVar4 | 2) * 4);
  puVar7[3] = (uint)(byte)(&DAT_023c6730)[uVar11 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar10 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)(uVar9 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c6730)[(ulonglong)uVar12 & 0xff] ^
              *(uint *)(unaff_RDI + 0xc + (ulonglong)(uVar4 | 3) * 4);
  lVar5 = 0;
  do {
    unaff_RSI[lVar5] = puVar7[lVar5];
    puVar7[lVar5] = 0;
    puVar8[lVar5] = 0;
    lVar5 = lVar5 + 1;
  } while (lVar5 != 4);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


