// Function: FUN_00b7b8b0
// Address: 00b7b8b0
// Size: 838 bytes
// Class: GNFilePath

void FUN_00b7b8b0(void)

{
  bool bVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  plVar6 = g_028a53b8;
  if ((g_028a53b8 == (int64_t *)0x0) || (g_028a53c1 == '\0')) {
    FUN_00e8cb50();
    if (g_028a53b8 == (int64_t *)0x0) {
      FUN_00d6f370();
      plVar6 = local_40;
      if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = g_027bf420;
      if (g_027bf420 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar2;
      local_68 = '\x01';
      local_60 = 0;
      local_58 = '\0';
      FUN_00d710b0(&local_60,&local_70);
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (int64_t *)0x0) {
LAB_00b7baf7:
        if (g_028a53b8 == (int64_t *)0x0) goto LAB_00b7bb00;
      }
      else {
        local_50 = plVar3;
        local_48 = '\0';
        FUN_00cddf30();
        plVar5 = g_028a53b8;
        if (g_028a53b8 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (int64_t *)0x0) {
              plVar5 = (int64_t *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar5 = local_40;
            }
          }
          else {
            local_38 = '\0';
            plVar5 = local_40;
          }
          bVar1 = g_028a53b8 != (int64_t *)0x0;
          g_028a53b8 = plVar5;
          if (bVar1) {
            FUN_00d50b20();
            plVar5 = local_40;
          }
        }
        if ((plVar5 != (int64_t *)0x0) && (g_028a53c0 == '\0')) {
          g_028a53c0 = '\x01';
          FUN_00e8cb90();
          plVar5 = local_40;
        }
        if ((local_38 != '\0') && (plVar5 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (g_028a53b8 != (int64_t *)0x0) {
          cVar4 = (**(code **)(*g_028a53b8 + 0x3a0))();
          if (((cVar4 == '\0') && (cVar4 = (**(code **)(*g_028a53b8 + 0x428))(), cVar4 == '\0'))
             && (g_028a53b8 != (int64_t *)0x0)) {
            g_028a53b8 = (int64_t *)0x0;
            FUN_00d50b20();
          }
          goto LAB_00b7baf7;
        }
LAB_00b7bb00:
        FUN_00b7b410();
        if ((local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*local_40 + 0x3a0))();
        if (cVar4 == '\0') {
          (**(code **)(*local_40 + 0x428))();
        }
        plVar5 = g_028a53b8;
        if (g_028a53b8 != local_40) {
          FUN_00d50b00();
          g_028a53b8 = local_40;
          if (plVar5 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        if (g_028a53c0 == '\0') {
          g_028a53c0 = '\x01';
          FUN_00e8cb90();
        }
        else if (local_40 == (int64_t *)0x0) goto LAB_00b7bb91;
        FUN_00d50b20();
      }
LAB_00b7bb91:
      if (plVar3 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      if (plVar6 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
      g_028a53c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a53c1 = '\x01';
      FUN_00e8cb70();
    }
    plVar6 = g_028a53b8;
    *(void*)(this_ptr + 1) = 0;
    if (plVar6 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
      goto LAB_00b7bbd0;
    }
  }
  else {
    *(void*)(this_ptr + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7bbd0:
  *this_ptr = plVar6;
  *(void*)(this_ptr + 1) = 1;
  return;
}

