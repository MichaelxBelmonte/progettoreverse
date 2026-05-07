// Function: FUN_00ce9330
// Address: 00ce9330
// Size: 1856 bytes
// Class: GNFilePath
// String references:
//   "%@.%@~"
//   "%@.%@~%I"

void* FUN_00ce9330(char param_1,int param_2)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  int64_t lVar4;
  char cVar5;
  int64_t *plVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t *plVar7;
  int iVar8;
  void*puVar9;
  uint8_t local_c8 [8];
  int64_t local_b8;
  char local_b0;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  
  (**(code **)(*arg1 + 0x390))();
  if ((local_88 == '\0') && (local_90 != 0)) {
    FUN_00d50b00();
  }
  (**(code **)(*arg1 + 0x368))();
  FUN_00d8a060();
  FUN_00d8ed10();
  if (local_88 == '\0') {
    if (local_90 != 0) {
      FUN_00d50b00();
    }
  }
  else {
    local_88 = '\0';
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  iVar8 = 0;
  plVar6 = (int64_t *)0x0;
  bVar2 = false;
  do {
    plVar7 = plVar6;
    bVar3 = bVar2;
    if (iVar8 == 0) {
      FUN_00083ea0(2,local_c8);
      FUN_00d8cb40();
      if (local_50 == plVar6) {
        if ((!bVar2) && (plVar6 != (int64_t *)0x0)) {
          if (local_48 != '\0') goto LAB_00ce9663;
          FUN_00d50b00();
          bVar3 = true;
        }
LAB_00ce9707:
        if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        if (local_48 == '\0') {
          if (local_50 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          plVar7 = local_50;
          if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_00ce9707;
        }
        plVar7 = local_50;
        if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00ce9663:
        local_48 = '\0';
        bVar3 = true;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      FUN_00083ea0(3,local_c8);
      FUN_00d8cb40();
      if (local_50 == plVar6) {
        if ((bVar2) || (local_50 == (int64_t *)0x0)) {
          if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
        else {
          if (local_48 != '\0') goto LAB_00ce95b5;
          FUN_00d50b00();
          bVar3 = true;
        }
      }
      else if (local_48 == '\0') {
        if (local_50 != (int64_t *)0x0) {
          FUN_00d50b00();
        }
        bVar3 = true;
        plVar7 = local_50;
        if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        plVar7 = local_50;
        if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
LAB_00ce95b5:
        local_48 = '\0';
        bVar3 = true;
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
    }
    plVar6 = plVar7;
    bVar2 = bVar3;
    if (param_2 != 0) {
      FUN_00d8fd30(param_2,2);
      if (plVar7 == &g_024c5048) {
        if (!bVar3) {
          bVar2 = true;
          if (local_88 != '\0') goto LAB_00ce9846;
          FUN_00d50b00();
          bVar2 = true;
        }
      }
      else {
        plVar6 = &g_024c5048;
        if (local_88 != '\0') {
          bVar2 = true;
          if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
            FUN_00d50b20();
            bVar2 = true;
          }
          goto LAB_00ce9846;
        }
        FUN_00d50b00();
        bVar2 = true;
        if ((bVar3) && (plVar7 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      if (local_88 != '\0') {
        FUN_00d50b20();
      }
    }
LAB_00ce9846:
    (**(code **)(*arg1 + 0x3f0))();
    (**(code **)(*local_50 + 0x400))();
    puVar9 = &g_024c5048;
    if (local_88 == '\0') {
      FUN_00d50b00();
    }
    else {
      local_88 = '\0';
    }
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((param_1 == '\0') ||
       ((cVar5 = (**(code **)(g_024c5048 + 0x398))(), cVar5 == '\0' &&
        (cVar5 = (**(code **)(g_024c5048 + 0x3a0))(), cVar5 == '\0')))) {
      lVar1 = arg1[7];
      if (lVar1 == 0) {
        if (g_024c5080 != 0) {
          g_024c5080 = 0;
          goto LAB_00ce9a1e;
        }
      }
      else {
        FUN_00d50b00();
        lVar4 = g_024c5080;
        if ((g_024c5080 != lVar1) && (FUN_00d50b00(), g_024c5080 = lVar1, lVar4 != 0)) {
LAB_00ce9a1e:
          FUN_00d50b20();
          if (lVar1 == 0) goto LAB_00ce9a33;
        }
        FUN_00d50b20();
      }
LAB_00ce9a33:
      *(void*)(this_ptr + 1) = 0;
      goto LAB_00ce9a59;
    }
    FUN_00d50b20();
    iVar8 = iVar8 + 1;
    if (iVar8 == 10000) {
      *(void*)(this_ptr + 1) = 0;
      puVar9 = (void*)0x0;
LAB_00ce9a59:
      *this_ptr = puVar9;
      *(void*)(this_ptr + 1) = 1;
      if (local_90 != 0) {
        FUN_00d50b20();
        FUN_00d50b20();
      }
      if ((bVar2) && (plVar6 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      return this_ptr;
    }
  } while( true );
}

