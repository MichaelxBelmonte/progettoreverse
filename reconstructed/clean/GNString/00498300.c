// Function: FUN_00498300
// Address: 00498300
// Size: 1350 bytes
// Class: GNString
// String references:
//   "_decomposedAudioSignalsAreInvalid"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00498300(void* param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  char cVar3;
  int64_t **pplVar4;
  void *pvVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t this_ptr;
  int64_t *plVar8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  char local_38;
  
  FUN_00d3ed20();
  plVar2 = local_40;
  if ((((local_38 == '\0') && (local_40 != (int64_t *)0x0)) && (FUN_00d50b00(), local_38 != '\0'))
     && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  lVar6 = g_026f6de8;
  if (g_026f6de8 != 0) {
    FUN_00d50b00();
  }
  FUN_00c9fe40();
  plVar1 = local_40;
  local_48 = local_38 != '\0';
  local_50 = local_40;
  if ((bool)local_48) {
    local_38 = '\0';
  }
  FUN_002771e0();
  if (plVar1 == (int64_t *)0x0) {
LAB_004983ea:
    pplVar4 = &g_02802688;
    plVar8 = g_02802688;
    if (g_02802690 != '\0') goto LAB_004983fa;
LAB_0049840d:
    if (plVar8 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    (**(code **)(*plVar1 + 0x360))();
    cVar3 = FUN_00e85ea0();
    if (cVar3 == '\0') goto LAB_004983ea;
    pplVar4 = &local_50;
    plVar8 = local_50;
    if (local_48 == '\0') goto LAB_0049840d;
LAB_004983fa:
    *(void*)(pplVar4 + 1) = 0;
  }
  if ((local_48 != '\0') && (plVar1 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar6 != 0) {
    FUN_00d50b20();
  }
  lVar6 = g_027087c0;
  if (plVar8 == (int64_t *)0x0) {
    if (g_027087c0 != 0) {
      FUN_00d50b00();
    }
    FUN_00c9fe40();
    plVar1 = local_40;
    local_48 = local_38 != '\0';
    local_50 = local_40;
    if ((bool)local_48) {
      local_38 = '\0';
    }
    FUN_002771e0();
    if (plVar1 == (int64_t *)0x0) {
LAB_00498675:
      pplVar4 = &g_02802688;
      plVar7 = g_02802688;
    }
    else {
      (**(code **)(*plVar1 + 0x360))();
      cVar3 = FUN_00e85ea0();
      if (cVar3 == '\0') goto LAB_00498675;
      pplVar4 = &local_50;
      plVar7 = local_50;
    }
    if (plVar7 != (int64_t *)0x0) {
      plVar8 = plVar7;
      if (*(char *)(pplVar4 + 1) == '\0') {
        FUN_00d50b00();
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
      }
    }
    if ((local_48 != '\0') && (plVar1 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  plVar1 = *(int64_t **)(this_ptr + 0x118);
  if ((plVar1 != (int64_t *)0x0) && (*(int64_t *)(this_ptr + 0x180) != 0)) {
    *(void*)(this_ptr + 0x180) = 0;
    FUN_00d50b20();
  }
  if ((plVar8 != (int64_t *)0x0) && (plVar7 = *(int64_t **)(this_ptr + 0x118), plVar7 != plVar8))
  {
    FUN_00d50b00();
    *(int64_t **)(this_ptr + 0x118) = plVar8;
    if (plVar7 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == plVar8) && (*(int64_t *)(this_ptr + 0x180) != 0)) goto LAB_00498813;
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b00();
    local_a0 = g_02702608;
    if (g_02702608 != 0) {
      FUN_00d50b00();
    }
    local_98 = '\x01';
    pvVar5 = _pthread_getspecific(param_1);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    local_70 = FUN_00e8b990();
    local_68 = 0;
    if (local_70 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    FUN_002771e0();
    lVar6 = FUN_00e85ef0();
    if (lVar6 == 0) {
      lVar6 = FUN_00e858c0();
      if ((lVar6 == 0) || (lVar6 = *(int64_t *)(lVar6 + 0x28), lVar6 == 0)) goto LAB_004986e7;
LAB_00498626:
      local_58 = 0;
      FUN_00d50b00();
    }
    else {
      lVar6 = *(int64_t *)(lVar6 + 0x30);
      if (lVar6 != 0) goto LAB_00498626;
LAB_004986e7:
      lVar6 = 0;
    }
    local_58 = '\x01';
    local_88 = '\0';
    local_90 = plVar8;
    local_60 = lVar6;
    FUN_000bfbc0(&local_70,&local_a0,0xa0,&local_60);
    plVar1 = *(int64_t **)(this_ptr + 0x180);
    plVar7 = plVar1;
    if (plVar1 != local_40) {
      if (local_38 == '\0') {
        if (local_40 == (int64_t *)0x0) {
          plVar7 = (int64_t *)0x0;
          goto LAB_00498743;
        }
        FUN_00d50b00();
        plVar1 = *(int64_t **)(this_ptr + 0x180);
        *(int64_t **)(this_ptr + 0x180) = local_40;
        plVar7 = local_40;
      }
      else {
        local_38 = '\0';
        plVar7 = local_40;
LAB_00498743:
        *(int64_t **)(this_ptr + 0x180) = plVar7;
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_00d50b20();
        plVar7 = local_40;
      }
    }
    if ((local_38 != '\0') && (plVar7 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != 0) {
      FUN_00d50b20();
    }
  }
  FUN_0047dd70();
LAB_00498813:
  if (plVar8 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (plVar2 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

