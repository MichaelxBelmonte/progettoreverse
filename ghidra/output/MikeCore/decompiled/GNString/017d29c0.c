// Function: FUN_017d29c0
// Address: 017d29c0
// Size: 1165 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x017d2a72) */
/* WARNING: Removing unreachable block (ram,0x017d2a7e) */
/* WARNING: Removing unreachable block (ram,0x017d2beb) */
/* WARNING: Removing unreachable block (ram,0x017d2bf7) */
/* WARNING: Removing unreachable block (ram,0x017d2d7b) */
/* WARNING: Removing unreachable block (ram,0x017d2d84) */
/* WARNING: Removing unreachable block (ram,0x017d2ba6) */
/* WARNING: Removing unreachable block (ram,0x017d2c97) */
/* WARNING: Removing unreachable block (ram,0x017d2ca0) */

longlong * FUN_017d29c0(longlong *param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong local_c8;
  char local_c0;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  char local_31;
  
  puVar4 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &DAT_02572358;
  (*DAT_02572370)();
  lVar7 = *param_1;
  local_31 = (char)param_1[1];
  if ((local_31 == '\0') || (lVar7 == 0)) {
    if (lVar7 != 0) goto LAB_017d2a31;
  }
  else {
    FUN_00d50b00();
LAB_017d2a31:
    lVar6 = DAT_027d3898;
    if (DAT_027d3898 != 0) {
      FUN_00d50b00();
    }
    uVar5 = FUN_00d90910();
    lVar1 = DAT_027d38a0;
    if (DAT_027d38a0 != 0) {
      FUN_00d50b00();
    }
    if (lVar6 == lVar1) {
      lVar1 = lVar6;
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    else if (lVar6 != 0) {
      FUN_00d50b20();
    }
    lVar6 = lVar7;
    if ((int)uVar5 != -1) {
LAB_017d2ad0:
      cVar2 = local_31;
      FUN_00d8f140(local_31,(int)((ulonglong)uVar5 >> 0x20) + (int)uVar5);
      if (local_48 == lVar6) {
        if ((local_31 == '\0') && (local_48 != 0)) {
          local_31 = '\x01';
          lVar7 = lVar6;
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_017d2b76;
          }
        }
        else {
joined_r0x017d2b8e:
          lVar7 = lVar6;
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        lVar7 = local_48;
        if (local_40 == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          local_31 = '\x01';
          if ((cVar2 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_48;
LAB_017d2b76:
            local_31 = '\x01';
            goto joined_r0x017d2b8e;
          }
        }
        else {
          local_31 = '\x01';
          if ((cVar2 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      uVar5 = FUN_00d90910();
      lVar6 = DAT_026e17f8;
      if ((int)uVar5 != -1) {
        FUN_00d97ce0();
        lVar6 = DAT_026e17f8;
        if (DAT_026e17f8 != 0) {
          FUN_00d50b00();
        }
        FUN_00d97f20();
        if (local_60 == '\0') {
          if (local_68 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_60 = '\0';
        }
        local_48 = local_68;
        local_40 = '\0';
        FUN_00d21140();
        if (local_68 != 0) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar6 != 0) {
          FUN_00d50b20();
        }
        lVar6 = lVar7;
        if ((local_c0 != '\0') && (local_c8 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_017d2ad0;
      }
      if (DAT_026e17f8 != 0) {
        FUN_00d50b00();
      }
      FUN_00d97f20();
      if (local_60 == '\0') {
        if (local_68 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      FUN_00d21140();
      if (local_68 != 0) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
      if (lVar6 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  if (param_2 < *(int *)((longlong)puVar4 + 0xc)) {
    iVar3 = FUN_00d8c7a0();
    if (iVar3 != 0) {
      lVar6 = *(longlong *)(puVar4[2] + (longlong)param_2 * 8);
      *(undefined1 *)(unaff_RDI + 1) = 0;
      if (lVar6 != 0) {
        FUN_00d50b00();
      }
      *unaff_RDI = lVar6;
      *(undefined1 *)(unaff_RDI + 1) = 1;
      goto joined_r0x017d2e3a;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
joined_r0x017d2e3a:
  if ((local_31 != '\0') && (lVar7 != 0)) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return unaff_RDI;
}


