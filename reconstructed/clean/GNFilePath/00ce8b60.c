// Function: FUN_00ce8b60
// Address: 00ce8b60
// Size: 1148 bytes
// Class: GNFilePath

uint64_t FUN_00ce8b60(char *param_1,uint64_t param_2,gid_t param_3)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  mode_t mVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t *this_ptr;
  int64_t local_110;
  char local_108;
  uint32_t local_100;
  uid_t local_fc;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  uint64_t local_60;
  char local_58;
  uint32_t local_4c;
  uint64_t local_40;
  char local_38;
  
  (**(code **)(*this_ptr + 0x368))();
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
    lVar1 = g_02775698;
    if (g_02775698 != 0) {
      FUN_00d50b00();
    }
    cVar2 = FUN_00c9ff50();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    lVar1 = g_02775698;
    if (cVar2 == '\0') {
LAB_00ce8d0c:
      lVar1 = g_027756a0;
      if (g_027756a0 != 0) {
        FUN_00d50b00();
      }
      uVar4 = FUN_00c9ff50();
      uVar7 = g_027756a8;
      cVar2 = '\x01';
      uVar6 = (uint64_t)uVar4;
      if ((char)uVar4 == '\0') {
        if (g_027756a8 != 0) {
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
        lVar1 = g_027756a0;
        if (iVar3 != -1) {
          if (g_027756a0 != 0) {
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
          lVar1 = g_027756a0;
          local_4c = local_100;
          uVar6 = g_027756a8;
          if (cVar2 != '\0') {
            if (g_027756a0 != 0) {
              FUN_00d50b00();
            }
            local_70 = lVar1;
            local_68 = '\x01';
            FUN_000175c0();
            local_4c = FUN_00d45870();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            uVar6 = g_027756a8;
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
              uVar6 = g_027756a8;
            }
          }
          g_027756a8 = uVar6;
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
          uVar6 = g_027756a8;
          if (cVar2 != '\0') {
            if (g_027756a8 != 0) {
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
      if (g_02775698 != 0) {
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

