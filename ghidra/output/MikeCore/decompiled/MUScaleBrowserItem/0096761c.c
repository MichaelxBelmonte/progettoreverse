// Function: FUN_0096761c
// Address: 0096761c
// Size: 922 bytes
// Class: MUScaleBrowserItem


void FUN_0096761c(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *unaff_RSI;
  longlong unaff_RDI;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  ulonglong local_50;
  uint local_48 [4];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  local_68 = *(uint *)(unaff_RDI + 0xfc) ^ *unaff_RSI;
  uVar12 = *(uint *)(unaff_RDI + 0x100) ^ unaff_RSI[1];
  uVar13 = *(uint *)(unaff_RDI + 0x104) ^ unaff_RSI[2];
  uVar14 = *(uint *)(unaff_RDI + 0x108) ^ unaff_RSI[3];
  uVar7 = *(uint *)(unaff_RDI + 0x10c);
  local_50 = (ulonglong)local_68;
  uVar10 = (ulonglong)(byte)local_68;
  uStack_64 = uVar12;
  uStack_60 = uVar13;
  uStack_5c = uVar14;
  if (*(int *)(unaff_RDI + 4) < 2) {
    puVar8 = &local_68;
    puVar5 = local_48;
    uVar2 = 4;
  }
  else {
    iVar4 = 1;
    lVar11 = 0x47;
    puVar1 = local_48;
    puVar8 = &local_68;
    uVar9 = local_50;
    uVar2 = uVar12;
    uVar3 = uVar13;
    do {
      puVar5 = puVar8;
      puVar8 = puVar1;
      uVar6 = uVar7 ^ *(uint *)(&DAT_023c7a30 + uVar10 * 4) ^
              *(uint *)(&DAT_023c7e30 + (ulonglong)(uVar14 >> 8 & 0xff) * 4) ^
              *(uint *)(&DAT_023c8230 + (ulonglong)(uVar3 >> 0x10 & 0xff) * 4) ^
              *(uint *)(&DAT_023c8630 + (ulonglong)(uVar2 >> 0x18) * 4);
      local_50 = (ulonglong)uVar6;
      *puVar8 = uVar6;
      uVar12 = *(uint *)(&DAT_023c7a30 + (ulonglong)(uVar2 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -0xc + lVar11 * 4) ^
               *(uint *)(&DAT_023c7e30 + (ulonglong)((uint)(uVar9 >> 8) & 0xff) * 4) ^
               *(uint *)(&DAT_023c8230 + (ulonglong)(uVar14 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8630 + (ulonglong)(uVar3 >> 0x18) * 4);
      puVar8[1] = uVar12;
      uVar13 = *(uint *)(&DAT_023c7a30 + (ulonglong)(uVar3 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -8 + lVar11 * 4) ^
               *(uint *)(&DAT_023c7e30 + (ulonglong)(uVar2 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8230 + (ulonglong)((uint)(uVar9 >> 0x10) & 0xff) * 4) ^
               *(uint *)(&DAT_023c8630 + (ulonglong)(uVar14 >> 0x18) * 4);
      puVar8[2] = uVar13;
      uVar14 = *(uint *)(&DAT_023c7a30 + (ulonglong)(uVar14 & 0xff) * 4) ^
               *(uint *)(unaff_RDI + -4 + lVar11 * 4) ^
               *(uint *)(&DAT_023c7e30 + (ulonglong)(uVar3 >> 8 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8230 + (ulonglong)(uVar2 >> 0x10 & 0xff) * 4) ^
               *(uint *)(&DAT_023c8630 + (uVar9 >> 0x18) * 4);
      puVar8[3] = uVar14;
      iVar4 = iVar4 + 1;
      uVar7 = *(uint *)(unaff_RDI + lVar11 * 4);
      uVar10 = (ulonglong)(uVar6 & 0xff);
      lVar11 = lVar11 + 4;
      puVar1 = puVar5;
      uVar9 = local_50;
      uVar2 = uVar12;
      uVar3 = uVar13;
    } while (iVar4 < *(int *)(unaff_RDI + 4));
    uVar10 = (ulonglong)(uVar6 & 0xff);
    uVar2 = (int)lVar11 - 0x43;
  }
  *puVar5 = (uint)(byte)(&DAT_023c8a30)[uVar12 >> 0x18] << 0x18 ^
            (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar13 >> 0x10) & 0xff] << 0x10 ^
            (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar14 >> 8) & 0xff] << 8 ^
            (byte)(&DAT_023c8a30)[uVar10] ^ uVar7;
  puVar5[1] = (uint)(byte)(&DAT_023c8a30)[uVar13 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar14 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c8a30)[local_50 >> 8 & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)uVar12 & 0xff] ^
              *(uint *)(unaff_RDI + 0xfc + (ulonglong)(uVar2 | 1) * 4);
  puVar5[2] = (uint)(byte)(&DAT_023c8a30)[uVar14 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c8a30)[local_50 >> 0x10 & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar12 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)uVar13 & 0xff] ^
              *(uint *)(unaff_RDI + 0xfc + (ulonglong)(uVar2 | 2) * 4);
  puVar5[3] = (uint)(byte)(&DAT_023c8a30)[local_50 >> 0x18] << 0x18 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar12 >> 0x10) & 0xff] << 0x10 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)(uVar13 >> 8) & 0xff] << 8 ^
              (uint)(byte)(&DAT_023c8a30)[(ulonglong)uVar14 & 0xff] ^
              *(uint *)(unaff_RDI + 0xfc + (ulonglong)(uVar2 | 3) * 4);
  lVar11 = 0;
  do {
    unaff_RSI[lVar11] = puVar5[lVar11];
    puVar5[lVar11] = 0;
    puVar8[lVar11] = 0;
    lVar11 = lVar11 + 1;
  } while (lVar11 != 4);
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


