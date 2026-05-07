// Function: FUN_01e67920
// Address: 01e67920
// Size: 1588 bytes
// Class: GNString
// String references:
//   "%@MouseOver"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_01e67920(uint32_t param_1,uint32_t param_2,int64_t *param_3,uint32_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  char cVar3;
  uint32_t in_ECX;
  uint32_t in_EDX;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar4;
  uint32_t local_res8;
  uint8_t local_res10;
  int64_t local_110;
  char local_108;
  int64_t *local_100;
  char local_f8;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t *local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t *local_80;
  int64_t *local_78;
  uint32_t local_70;
  uint32_t local_6c;
  int64_t *local_68;
  int64_t local_60;
  int64_t *local_58;
  int64_t *local_50;
  uint local_48;
  int64_t *local_40;
  char local_38;
  
  local_70 = param_4;
  local_6c = in_ECX;
  cVar3 = FUN_01d53b40();
  if (cVar3 != '\0') {
    FUN_01e63b70(local_res8,in_EDX,local_res10);
    plVar2 = local_50;
    if (((((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) &&
        (FUN_00d50b00(), (char)local_48 != '\0')) && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_110 = *param_3;
    local_108 = '\0';
    local_100 = plVar2;
    local_f8 = '\0';
    FUN_01cc2320(param_1,param_2,&local_110,local_70,&local_100);
    if ((local_f8 != '\0') && (local_100 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_108 != '\0') && (local_110 != 0)) {
      FUN_00d50b20();
    }
    if (plVar2 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b20();
    return;
  }
  if (*(float *)(this_ptr + 0x34) <= 0.0) goto LAB_01e67e9b;
  (**(code **)(*(int64_t *)*param_3 + 0x148))();
  plVar2 = local_50;
  if ((char)local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_01e67e9b;
    FUN_00d50b00();
    if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (int64_t *)0x0) goto LAB_01e67e9b;
  lVar1 = g_027f4008;
  local_78 = plVar2;
  if (g_027f4008 != 0) {
    FUN_00d50b00();
  }
  local_f0 = lVar1;
  local_e8 = '\x01';
  cVar3 = (**(code **)(*local_78 + 0x50))();
  if ((local_e8 != '\0') && (local_f0 != 0)) {
    FUN_00d50b20();
  }
  plVar2 = local_78;
  if (cVar3 != '\0') {
    local_48 = 1;
    local_50 = &g_024c5048;
    local_38 = 0;
    local_58 = param_3;
    uVar4 = FUN_00d50b00();
    local_40 = plVar2;
    local_38 = '\x01';
    FUN_00d8cb40(uVar4,&local_50);
    local_60 = local_90;
    if (local_88 == '\0') {
      if (((local_90 != 0) && (FUN_00d50b00(), local_88 != '\0')) && (local_90 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_88 = '\0';
    }
    local_50 = &g_024c5048;
    if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_e0 = local_60;
    local_d8 = '\0';
    FUN_01d51a40();
    param_3 = local_58;
    local_68 = local_50;
    if ((char)local_48 == '\0') {
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_48 = local_48 & 0xffffff00;
    }
    if ((local_d8 != '\0') && (local_e0 != 0)) {
      FUN_00d50b20();
    }
    if (local_68 != (int64_t *)0x0) {
      uVar4 = FUN_01d526f0();
      FUN_01d4ed90(uVar4,g_02390124);
      plVar2 = local_50;
      if (((char)local_48 == '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b00();
        if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      FUN_01d52700();
      FUN_01d52740();
      local_d0 = *local_58;
      local_c8 = '\0';
      (**(code **)(*local_50 + 0x400))(0);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      FUN_01d489d0(*(void*)(this_ptr + 0x34));
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52740();
      local_c0 = local_68;
      local_b8 = '\0';
      (**(code **)(*local_50 + 0x400))(0);
      if ((local_b8 != '\0') && (local_c0 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (((char)local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      FUN_01d52770();
      local_80 = (int64_t *)*local_58;
      lVar1 = local_58[1];
      if (local_80 == plVar2) {
        if (((char)lVar1 != '\0') || (plVar2 == (int64_t *)0x0)) goto LAB_01e67dd8;
        FUN_00d50b00();
        *(void*)(local_58 + 1) = 1;
LAB_01e67e73:
        param_3 = local_58;
        FUN_00d50b20();
      }
      else {
        if (plVar2 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        *local_58 = (int64_t)plVar2;
        if (((char)lVar1 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        *(void*)(local_58 + 1) = 1;
LAB_01e67dd8:
        param_3 = local_58;
        if (plVar2 != (int64_t *)0x0) goto LAB_01e67e73;
      }
      FUN_00d50b20();
    }
    if (local_60 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
LAB_01e67e9b:
  local_b0 = *arg1;
  local_a8 = '\0';
  local_a0 = *param_3;
  local_98 = '\0';
  FUN_01cc21a0(param_1,param_2,&local_a0,local_70);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  return;
}

