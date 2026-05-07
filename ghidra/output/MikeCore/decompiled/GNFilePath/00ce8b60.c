// Function: FUN_00ce8b60
// Address: 00ce8b60
// Size: 1148 bytes
// Class: GNFilePath


/* WARNING: Removing unreachable block (ram,0x00ce8d4c) */
/* WARNING: Removing unreachable block (ram,0x00ce8d58) */
/* WARNING: Removing unreachable block (ram,0x00ce8c5a) */
/* WARNING: Removing unreachable block (ram,0x00ce8c66) */
/* WARNING: Removing unreachable block (ram,0x00ce8cde) */
/* WARNING: Removing unreachable block (ram,0x00ce8cea) */
/* WARNING: Removing unreachable block (ram,0x00ce8da5) */
/* WARNING: Removing unreachable block (ram,0x00ce8db1) */
/* WARNING: Removing unreachable block (ram,0x00ce8bb0) */
/* WARNING: Removing unreachable block (ram,0x00ce8bbc) */

ulonglong FUN_00ce8b60(char *param_1,undefined8 param_2,gid_t param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  mode_t mVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *unaff_RDI;
  longlong local_110;
  char local_108;
  undefined4 local_100;
  uid_t local_fc;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  ulonglong local_60;
  char local_58;
  undefined4 local_4c;
  ulonglong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0x368))();
  if (local_110 == 0) {
    uVar7 = 0;
    goto LAB_00ce8fc8;
  }
  if (local_108 == '\0') {
    FUN_00d50b00();
  }
  FUN_00cde260();
  if (local_108 == '\0') {
    if (local_110 == 0) goto LAB_00ce8ecb;
    FUN_00d50b00();
LAB_00ce8c19:
    lVar1 = DAT_02775698;
    if (DAT_02775698 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00c9ff50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = DAT_02775698;
    if (cVar2 == '\0') {
LAB_00ce8d0c:
      lVar1 = DAT_027756a0;
      if (DAT_027756a0 != 0) {
        FUN_00d50b00();
      }
      uVar4 = FUN_00c9ff50();
      uVar7 = DAT_027756a8;
      cVar2 = '\x01';
      uVar6 = (ulonglong)uVar4;
      if ((char)uVar4 == '\0') {
        if (DAT_027756a8 != 0) {
          FUN_00d50b00();
        }
        cVar2 = FUN_00c9ff50();
        uVar6 = uVar7;
        if (uVar7 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      uVar7 = CONCAT71((int7)(uVar6 >> 8),1);
      if (cVar2 != '\0') {
        iVar3 = _stat_INODE64();
        lVar1 = DAT_027756a0;
        if (iVar3 != -1) {
          if (DAT_027756a0 != 0) {
            FUN_00d50b00();
          }
          local_40 = lVar1;
          local_38 = '\0';
          cVar2 = FUN_00c9ff50();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          lVar1 = DAT_027756a0;
          local_4c = local_100;
          uVar6 = DAT_027756a8;
          if (cVar2 != '\0') {
            if (DAT_027756a0 != 0) {
              FUN_00d50b00();
            }
            local_70 = lVar1;
            local_68 = '\x01';
            FUN_000175c0();
            local_4c = FUN_00d45870();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            uVar6 = DAT_027756a8;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
              uVar6 = DAT_027756a8;
            }
          }
          DAT_027756a8 = uVar6;
          if (uVar6 != 0) {
            FUN_00d50b00();
          }
          local_38 = '\0';
          local_40 = uVar6;
          cVar2 = FUN_00c9ff50();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (uVar6 != 0) {
            FUN_00d50b20();
          }
          uVar6 = DAT_027756a8;
          if (cVar2 != '\0') {
            if (DAT_027756a8 != 0) {
              FUN_00d50b00();
            }
            local_60 = uVar6;
            local_58 = '\x01';
            FUN_000175c0();
            local_fc = FUN_00d45870();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_58 != '\0') && (local_60 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar3 = _chown(param_1,local_fc,param_3);
          if (iVar3 != -1) goto LAB_00ce8fb7;
        }
        goto LAB_00ce8fb5;
      }
    }
    else {
      if (DAT_02775698 != 0) {
        FUN_00d50b00();
      }
      local_80 = lVar1;
      local_78 = '\x01';
      mVar5 = (mode_t)&local_80;
      FUN_000175c0();
      FUN_00d45870();
      iVar3 = _chmod(param_1,mVar5);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if (iVar3 != -1) goto LAB_00ce8d0c;
LAB_00ce8fb5:
      uVar7 = 0;
    }
LAB_00ce8fb7:
    FUN_00d50b20();
  }
  else {
    if (local_110 != 0) goto LAB_00ce8c19;
LAB_00ce8ecb:
    uVar7 = 0;
  }
  FUN_00d50b20();
LAB_00ce8fc8:
  return uVar7 & 0xffffffff;
}


