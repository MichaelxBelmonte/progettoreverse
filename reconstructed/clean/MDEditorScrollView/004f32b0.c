// Function: FUN_004f32b0
// Address: 004f32b0
// Size: 2174 bytes
// Class: MDEditorScrollView
// === MDEditorScrollView properties ===
//   MUScaleRulerViewDisplayMode _scaleRulerViewDisplayMode


void FUN_004f32b0(double param_1,double param_2)

{
  byte bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  void* in_ECX;
  void* pVar6;
  char *pcVar7;
  int64_t *plVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int64_t *plVar9;
  uint64_t uVar10;
  double dVar11;
  int64_t *local_80;
  char local_78;
  double local_70;
  double local_60;
  double local_58;
  int64_t *local_50;
  char local_48 [8];
  double local_40;
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x10) == 0) {
    return;
  }
  dVar11 = param_2;
  FUN_0021a630();
  if (local_48[0] == '\0') {
    if (local_50 == (int64_t *)0x0) {
      return;
    }
    FUN_00d50b00();
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_50 == (int64_t *)0x0) {
    return;
  }
  FUN_0021a2c0();
  local_58 = (double)(**(code **)(*local_50 + 0xa50))();
  local_40 = dVar11;
  FUN_00226f20();
  if ((((local_48[0] == '\0') && (local_50 != (int64_t *)0x0)) &&
      (FUN_00d50b00(), local_48[0] != '\0')) && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(*local_50 + 0x9e0))();
  if (local_78 == '\0') {
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_78 = '\0';
  }
  FUN_012e74e0();
  if (local_48[0] == '\0') {
    if (((local_50 != (int64_t *)0x0) && (FUN_00d50b00(), local_48[0] != '\0')) &&
       (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_48[0] = '\0';
  }
  if (local_80 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar9 = local_50;
  if ((local_50 != (int64_t *)0x0) && (*(int *)((int64_t)local_50 + 0xc) == 1)) {
    FUN_00d23310();
    in_ECX = CONCAT31((int3)(in_ECX >> 8),local_48[0]);
    pcVar7 = local_38;
    if (local_48[0] != '\0') {
      pcVar7 = local_48;
    }
    local_38[0] = local_48[0];
    *pcVar7 = '\0';
    if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(in_ECX);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012f51f0();
    if (local_78 == '\0') {
      if (local_80 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_78 = '\0';
    }
    if ((local_38[0] != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != (int64_t *)0x0) && (local_50 != local_80)) {
      FUN_00228980();
      FUN_00d50b00();
      plVar9 = local_80;
      if (local_50 != (int64_t *)0x0) {
        FUN_00d50b20();
      }
    }
    if (local_80 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  pVar6 = CONCAT31((int3)(in_ECX >> 8),NAN(param_1) || param_2 <= 0.0);
  local_70 = param_1;
  local_60 = param_2;
  if ((NAN(param_1) || param_2 <= 0.0) && (plVar9 != (int64_t *)0x0)) {
    pvVar5 = _pthread_getspecific(pVar6);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0165a070();
    if (local_48[0] == '\0') {
      if (local_50 != (int64_t *)0x0) goto LAB_004f3603;
    }
    else if (local_50 != (int64_t *)0x0) {
      FUN_00d50b20();
LAB_004f3603:
      iVar4 = FUN_00228b30();
      if (iVar4 == 0) {
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar10 = FUN_01653910();
        pvVar5 = _pthread_getspecific(pVar6);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_60 = (double)FUN_01653920();
        local_70 = (double)FUN_00e7b500(uVar10);
      }
      else {
        iVar4 = FUN_00228b30();
        if (iVar4 == 1) {
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          uVar10 = FUN_01653910();
          pvVar5 = _pthread_getspecific(pVar6);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_60 = (double)FUN_01653920();
          local_70 = (double)FUN_00e7b500(uVar10);
        }
      }
    }
  }
  if ((local_60 <= 0.0) || (NAN(local_70))) goto LAB_004f3ad2;
  bVar1 = 1;
  plVar8 = (int64_t *)0x0;
  dVar11 = local_40;
  if ((0.0 < local_40) && (!NAN(local_58))) {
    iVar4 = FUN_00228b30();
    if (iVar4 == 1) {
      FUN_00226f20();
      if (local_50 == (int64_t *)0x0) {
        plVar8 = (int64_t *)0x0;
        dVar11 = local_40;
      }
      else {
        if (((local_48[0] == '\0') && (FUN_00d50b00(), local_48[0] != '\0')) &&
           (local_50 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        local_58 = (double)FUN_004f0fe0(local_58);
        bVar1 = 0;
        plVar8 = local_50;
        dVar11 = local_40;
      }
    }
    else {
      plVar8 = (int64_t *)0x0;
      dVar11 = local_40;
    }
  }
  local_40 = dVar11;
  if (((0.0 < dVar11) && (!NAN(local_58))) &&
     ((local_70 <= local_58 || (local_58 + dVar11 <= local_70 + local_60)))) {
    if (local_58 <= local_70) {
      if (dVar11 <= local_60) {
        local_58 = (double)FUN_00e7b500(local_70 + g_02394dd0);
        local_40 = dVar11;
      }
      else {
LAB_004f38cc:
        cVar2 = FUN_00e7b560(local_70,local_60,local_58);
        if (cVar2 == '\0') {
          local_58 = (double)FUN_00e7b500(local_70 + (local_40 - local_60) * g_02394dd0);
        }
        else {
          dVar11 = local_40;
          if (local_70 < local_58) goto LAB_004f3905;
          local_58 = (double)FUN_00e7b500((local_70 + local_60 + g_023942d0) - local_40);
        }
      }
    }
    else {
      if (local_58 + dVar11 < local_70 + local_60) goto LAB_004f3abf;
      if (local_60 < dVar11) goto LAB_004f38cc;
LAB_004f3905:
      local_40 = local_70 + local_60 + g_023942d0;
      FUN_00e7b500(local_40 - dVar11);
      if (dVar11 <= local_60) {
        local_58 = (double)FUN_00e7b500(local_40 - dVar11);
        local_40 = dVar11;
      }
      else {
        local_58 = (double)FUN_00e7b500(local_70 + g_02394dd0);
        local_40 = dVar11;
      }
    }
    if (plVar8 != (int64_t *)0x0) {
      local_58 = (double)FUN_004f10a0(local_58);
    }
    if (unaff_SIL != '\0') {
      FUN_00226250();
      if (local_50 == (int64_t *)0x0) {
        bVar3 = 1;
      }
      else {
        FUN_00226250();
        bVar3 = (**(code **)(*local_80 + 0x398))();
        if ((local_78 != '\0') && (local_80 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        bVar3 = bVar3 ^ 1;
      }
      if ((local_48[0] != '\0') && (local_50 != (int64_t *)0x0)) {
        FUN_00d50b20();
      }
      if (bVar3 == 0) goto LAB_004f3abf;
    }
    FUN_019af2a0(local_58,local_40);
  }
LAB_004f3abf:
  if (!(bool)(bVar1 | plVar8 == (int64_t *)0x0)) {
    FUN_00d50b20();
  }
LAB_004f3ad2:
  FUN_004f2580(local_58,local_40);
  if (local_50 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar9 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  FUN_00d50b20();
  return;
}

