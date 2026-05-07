// Function: FUN_00d31230
// Address: 00d31230
// Size: 713 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00d31230(int64_t *param_1,int64_t *param_2)

{
  bool bVar1;
  bool bVar2;
  int64_t *plVar3;
  int64_t *arg1;
  int64_t lVar4;
  bool bVar5;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  char local_48;
  int64_t local_40;
  char local_38;
  
  if ((g_028a7708 == (int64_t *)0x0) || (g_028a7711 == '\0')) {
    FUN_00e8cb50();
    if (g_028a7708 == (int64_t *)0x0) {
      plVar3 = (int64_t *)FUN_00e8fc40();
      FUN_00022d50();
      (**(code **)(*plVar3 + 0x18))();
      if (g_028a7708 == plVar3) {
        bVar2 = false;
        bVar1 = false;
      }
      else {
        bVar2 = true;
        bVar1 = true;
        bVar5 = g_028a7708 != (int64_t *)0x0;
        g_028a7708 = plVar3;
        if (bVar5) {
          FUN_00d50b20();
        }
      }
      if (g_028a7710 == '\0') {
        g_028a7710 = '\x01';
        FUN_00e8cb90();
        bVar1 = bVar2;
      }
      if (!bVar1) {
        FUN_00d50b20();
      }
      g_028a7711 = '\x01';
      FUN_00e8cb70();
    }
    else {
      g_028a7711 = '\x01';
      FUN_00e8cb70();
    }
  }
  FUN_000175c0();
  lVar4 = local_40;
  if (local_38 == '\0') {
    if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38 = '\0';
  }
  if (lVar4 == 0) {
    FUN_00e42580();
    if (((local_40 != 0) && (lVar4 = local_40, local_38 == '\0')) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    local_40 = *arg1;
    local_38 = '\0';
    FUN_00ca0840();
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  if (*param_1 == 0) {
    local_50 = *param_2;
    local_48 = '\0';
    FUN_00e427c0();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_70 = *param_2;
    local_68 = '\0';
    local_58 = '\0';
    local_60 = *param_1;
    FUN_00e428f0(&local_60,&local_70);
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  return;
}

