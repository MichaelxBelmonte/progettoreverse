// Function: FUN_00239fc0
// Address: 00239fc0
// Size: 2134 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_00239fc0(void* param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  char cVar5;
  void *pvVar6;
  char *pcVar7;
  int64_t *plVar8;
  int64_t this_ptr;
  uint64_t extraout_XMM0_Qa;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t local_d8;
  int64_t local_b0;
  char local_a8;
  int64_t *local_a0;
  char local_98;
  uint64_t local_80;
  uint64_t local_78;
  int64_t *local_58;
  char local_50;
  char local_48 [8];
  int64_t *local_40;
  char local_38 [8];
  
  FUN_00710820();
  FUN_00441f10();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(this_ptr + 0x1c0) == 0) {
    local_38[0] = '\0';
    local_40 = (int64_t *)0x0;
  }
  else {
    FUN_006f3f00();
  }
  cVar5 = FUN_00751ba0();
  uVar9 = extraout_XMM0_Qa;
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    uVar9 = FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    FUN_0023af30(uVar9,0);
    FUN_0023c090();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  local_80 = 0;
  local_78 = 0;
  local_d8 = 0;
  if (cVar5 != '\0') {
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    uVar9 = (**(code **)(*local_40 + 0x68))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    uVar10 = (**(code **)(*local_40 + 0xc0))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
                *local_58 + 0x20))();
    uVar11 = (**(code **)(*local_40 + 0xd0))();
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      (**(code **)(*local_40 + 0x10))();
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_d8 = FUN_0193c6b0(uVar9);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_80 = FUN_0193c6b0(uVar10);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
    local_78 = FUN_0193c6b0(uVar11);
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  (**(code **)(&UNK_00001668 + *local_58))();
  plVar4 = local_40;
  if (local_38[0] == '\0') {
    if (((local_40 != (int64_t *)0x0) && (FUN_00d50b00(), local_38[0] != '\0')) &&
       (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_38[0] = '\0';
  }
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  pvVar6 = _pthread_getspecific(param_1);
  if (pvVar6 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e8b990();
  local_98 = 0;
  (**(code **)(*(int64_t *)(this_ptr + 0x70) + 0x10))();
  FUN_00d50b00();
  local_98 = '\x01';
  local_a0 = (int64_t *)(this_ptr + 0x70);
  FUN_00cbb340();
  if ((local_98 != '\0') && (local_a0 != (int64_t *)0x0)) {
    (**(code **)(*local_a0 + 0x10))();
    FUN_00d50b20();
  }
  (**(code **)("/System/Library/Frameworks/CoreServices.framework/Versions/A/CoreServices" +
              **(int64_t **)(this_ptr + 0x90) + 0x38))();
  (**(code **)(&UNK_00001550 + **(int64_t **)(this_ptr + 0x90)))();
  (**(code **)(&UNK_00001548 + *local_40))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0xb50))();
  FUN_01f27fe0();
  (**(code **)(*local_40 + 0x400))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_00d403d0();
  lVar1 = g_026fe410;
  if (g_026fe410 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_b0 = 0;
  local_a8 = '\0';
  FUN_00d40470(&local_b0,&stack0xffffffffffffff70,1,3);
  if ((local_a8 != '\0') && (local_b0 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 != '\0') {
    lVar1 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_004405c0();
    lVar2 = *(int64_t *)(this_ptr + 0xb8);
    if (lVar2 != 0) {
      FUN_00d50b00();
    }
    FUN_004405f0();
    if (local_50 == '\0') {
      if (local_58 != (int64_t *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_50 = '\0';
    }
    FUN_004b5760();
    if (local_58 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar2 != 0) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_00239d50();
  FUN_01f27fe0();
  cVar5 = (**(code **)(*local_40 + 0x450))();
  if ((local_38[0] != '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar5 == '\0') goto LAB_0023a7f6;
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar3))();
  plVar8 = local_40;
  local_48[0] = local_38[0];
  pcVar7 = local_38;
  if (local_38[0] == '\0') {
    pcVar7 = local_48;
  }
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0023a6f7:
    FUN_00d50b00();
  }
  else if (local_48[0] == '\0') goto LAB_0023a6f7;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar8 + 0x20))();
  (**(code **)(*local_58 + 0x60))(local_d8);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  plVar3 = *(int64_t **)(this_ptr + 0x90);
  (**(code **)(&UNK_00001550 + *plVar3))();
  plVar8 = local_40;
  pcVar7 = local_38;
  if (local_38[0] == '\0') {
    pcVar7 = local_48;
  }
  local_48[0] = local_38[0];
  *pcVar7 = '\0';
  if ((local_38[0] != '\0') && (plVar8 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar8 == (int64_t *)0x0) {
    plVar8 = *(int64_t **)(this_ptr + 0x90);
LAB_0023a79d:
    FUN_00d50b00();
  }
  else if (local_48[0] == '\0') goto LAB_0023a79d;
  (**(code **)("/System/Library/Frameworks/Foundation.framework/Versions/C/Foundation" +
              *plVar8 + 0x20))();
  (**(code **)(*local_58 + 0xe0))(local_80,local_78);
  if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
    (**(code **)(*local_58 + 0x10))();
    FUN_00d50b20();
  }
  if (plVar3 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
LAB_0023a7f6:
  if (plVar4 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

