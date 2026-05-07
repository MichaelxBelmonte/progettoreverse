// Function: FUN_006500a0
// Address: 006500a0
// Size: 1185 bytes
// Class: MDEditorViewController
// === MDEditorViewController properties ===
//   MUEditTimelineMode _tempoEditorMode
//   MDEditMode      _editMode
//   MDEditMode      _lastEditMode


void FUN_006500a0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  char cVar2;
  char *pcVar3;
  void *pvVar4;
  void* pVar5;
  int64_t *plVar6;
  void*this_ptr;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t local_e0;
  uint8_t local_d8;
  int64_t *local_d0;
  uint8_t local_c8;
  int64_t local_c0;
  char local_b8;
  int64_t local_b0;
  char local_a8;
  int64_t local_a0;
  char local_98;
  int64_t *local_90;
  char local_88;
  char local_80;
  undefined7 uStack_7f;
  char local_78;
  int64_t *local_70;
  int64_t *local_68;
  int64_t *local_60;
  int64_t *local_58;
  char local_50 [8];
  char local_48 [8];
  char local_40 [8];
  char local_38;
  
  local_e0 = *param_2;
  if (local_e0 == 0) {
    *(void*)(this_ptr + 1) = 0;
    *this_ptr = 0;
    return;
  }
  local_d8 = 0;
  local_70 = param_2;
  FUN_0064fb00(param_1,&local_e0);
  plVar7 = local_58;
  pVar5 = (void*)param_1;
  local_48[0] = local_50[0];
  pcVar3 = local_48;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_60 = plVar7;
  local_d0 = plVar7;
  local_c8 = 0;
  FUN_00642e80();
  plVar7 = local_58;
  local_40[0] = local_50[0];
  pcVar3 = local_40;
  if (local_50[0] != '\0') {
    pcVar3 = local_50;
  }
  *pcVar3 = '\0';
  if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar7;
  local_38 = '\0';
  FUN_0063f230();
  if (local_58 == (int64_t *)0x0) {
LAB_0065023c:
    plVar7 = local_68;
    FUN_004405c0();
    if (local_58 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      plVar6 = local_58;
      if (local_50[0] == '\0') {
        local_38 = '\0';
      }
      else {
        local_38 = '\x01';
        local_50[0] = '\0';
      }
    }
  }
  else {
    FUN_0063f230();
    lVar1 = CONCAT71(uStack_7f,local_80);
    cVar2 = FUN_00212c70();
    if ((local_78 != '\0') && (lVar1 != 0)) {
      FUN_00d50b20();
    }
    if (local_50[0] != '\0') {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_0065023c;
    FUN_01f27fe0();
    cVar2 = (**(code **)(*local_58 + 0x450))();
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') goto LAB_0065023c;
    FUN_004405f0();
    plVar7 = local_68;
    if (local_58 == (int64_t *)0x0) {
      plVar6 = (int64_t *)0x0;
    }
    else {
      local_38 = local_50[0] != '\0';
      plVar6 = local_58;
      if ((bool)local_38) {
        local_50[0] = '\0';
      }
    }
  }
  local_c0 = *local_70;
  local_b8 = '\0';
  FUN_004b8020();
  plVar8 = local_58;
  if (local_50[0] == '\0') {
    if (((local_58 != (int64_t *)0x0) && (FUN_00d50b00(), local_50[0] != '\0')) &&
       (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_50[0] = '\0';
  }
  if ((local_b8 != '\0') && (local_c0 != 0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    pvVar4 = _pthread_getspecific(pVar5);
    if (pvVar4 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar2 = FUN_004a1190();
    if (cVar2 != '\0') {
      *(void*)(this_ptr + 1) = 0;
      *this_ptr = 0;
      goto joined_r0x006503dc;
    }
    local_b0 = *local_70;
    local_a8 = '\0';
    FUN_003b6860();
    if (local_58 != (int64_t *)0x0) {
      plVar8 = local_58;
      if (local_50[0] == '\0') {
        FUN_00d50b00();
        if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_50[0] = '\0';
      }
    }
    if ((local_a8 != '\0') && (local_b0 != 0)) {
      FUN_00d50b20();
    }
    local_a0 = *local_70;
    local_98 = '\0';
    FUN_004f9670();
    pcVar3 = &local_80;
    if (local_50[0] != '\0') {
      pcVar3 = local_50;
    }
    local_80 = local_50[0];
    *pcVar3 = '\0';
    if ((local_50[0] != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    local_88 = '\0';
    local_90 = plVar8;
    FUN_004b7a60();
    if ((local_88 != '\0') && (local_90 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = plVar8;
  *(void*)(this_ptr + 1) = 1;
joined_r0x006503dc:
  if ((local_38 != '\0') && (plVar6 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (plVar7 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_60 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

