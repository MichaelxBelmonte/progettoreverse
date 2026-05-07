// ===================================================================
// MDAudioTrackHeaderViewController — Complete reconstructed pseudocode
// 10 functions
// ===================================================================


// ============================================================
// 0070e870
// ============================================================
// Function: FUN_0070e870
// Address: 0070e870
// Size: 1599 bytes
// Class: MDAudioTrackHeaderViewController

uint32_t FUN_0070e870(void)

{
  int iVar1;
  uint32_t uVar2;
  void *pvVar3;
  char *pcVar4;
  void* pVar5;
  char *pcVar6;
  int64_t *arg1;
  int64_t lVar7;
  bool bVar8;
  int64_t *local_118;
  char local_110;
  int64_t local_f0;
  char local_e8;
  int64_t local_e0;
  char local_d8;
  int64_t local_d0;
  char local_c8;
  int64_t local_a0;
  char local_98;
  int64_t local_90;
  char local_88;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  char local_60;
  undefined7 uStack_5f;
  char local_58;
  int64_t local_50;
  char local_48 [8];
  int64_t local_40;
  char local_38 [8];
  
  FUN_006fc300();
  lVar7 = local_50;
  if ((((local_48[0] == '\0') && (local_50 != 0)) && (FUN_00d50b00(), local_48[0] != '\0')) &&
     (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((*(int *)(*arg1 + 0xc) == 1) && (*(int *)(lVar7 + 0xc) == 1)) {
    local_40 = lVar7;
    FUN_00d23310();
    lVar7 = local_50;
    local_60 = local_48[0];
    pcVar6 = &local_60;
    pcVar4 = local_48;
    if (local_48[0] == '\0') {
      pcVar4 = pcVar6;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    pvVar3 = _pthread_getspecific((void*)pcVar6);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    iVar1 = *(int *)(local_70 + 0xc);
    if (local_68 != '\0') {
      FUN_00d50b20();
    }
    if ((local_60 != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    lVar7 = local_40;
    if (iVar1 == 0) {
      FUN_006f3f00();
      FUN_00d23310();
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = &local_60;
      }
      local_60 = local_48[0];
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_88 = 0;
      if ((local_60 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      local_90 = local_50;
      local_88 = '\x01';
      uVar2 = FUN_0075edc0(0,&local_90);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0070eda8;
    }
  }
  if (*(int *)(lVar7 + 0xc) == 1) {
    FUN_00d23310();
    lVar7 = local_50;
    pcVar6 = local_48;
    local_38[0] = local_48[0];
    pcVar4 = local_38;
    if (local_48[0] != '\0') {
      pcVar4 = pcVar6;
    }
    *pcVar4 = '\0';
    if ((local_48[0] != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    pVar5 = (void*)pcVar6;
    pvVar3 = _pthread_getspecific(pVar5);
    if (pvVar3 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_012e5ae0();
    if (*(int *)(local_70 + 0xc) == 0) {
      FUN_006f3f00();
      (**(code **)(*local_118 + 0x628))();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004a1110();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01313ad0();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012cb110();
      pvVar3 = _pthread_getspecific(pVar5);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e6160();
      bVar8 = *(int *)(local_50 + 0xc) == 1;
      if (local_48[0] != '\0') {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
        FUN_00d50b20();
      }
      if ((local_e8 != '\0') && (local_f0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
      if (local_110 != '\0') {
        FUN_00d50b20();
      }
    }
    else {
      bVar8 = false;
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_38[0] != '\0') && (lVar7 != 0)) {
      FUN_00d50b20();
    }
    if (bVar8) {
      FUN_006f3f00();
      FUN_00d23310();
      pcVar6 = local_48;
      if (local_48[0] == '\0') {
        pcVar6 = &local_60;
      }
      local_60 = local_48[0];
      *pcVar6 = '\0';
      if ((local_48[0] != '\0') && (local_50 != 0)) {
        FUN_00d50b20();
      }
      local_78 = 0;
      if ((local_60 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      local_80 = local_50;
      local_78 = '\x01';
      uVar2 = FUN_0075edc0(0,&local_80);
      if ((local_78 != '\0') && (local_80 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_0070eda8;
    }
  }
  FUN_006f3f00();
  local_a0 = 0;
  local_98 = '\0';
  uVar2 = FUN_0075edc0(0,&local_a0);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_48[0] != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
LAB_0070eda8:
  FUN_00d50b20();
  return uVar2;
}



// ============================================================
// 003bfe00
// ============================================================
// Function: FUN_003bfe00
// Address: 003bfe00
// Size: 1209 bytes
// Class: MDAudioTrackHeaderViewController

void FUN_003bfe00(uint64_t param_1,uint32_t param_2)

{
  void*puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void*puVar4;
  void *pvVar5;
  void* pVar6;
  int64_t this_ptr;
  uint32_t uVar7;
  int64_t *local_98;
  char local_90;
  int64_t *local_38;
  char local_30;
  
  if (*(int64_t *)(this_ptr + 0x98) != 0) {
    FUN_01e40eb0();
    if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38 != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x478))();
    }
    if (*(int64_t *)(this_ptr + 0x98) != 0) {
      *(void*)(this_ptr + 0x98) = 0;
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x4d8))();
  uVar7 = FUN_00d05530();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_0006daf0();
  *(void*)(puVar4 + 0x27) = 0;
  puVar4[0x2e] = 0;
  *(void*)(puVar4 + 0x2f) = 0;
  puVar4[0x30] = 0;
  *(void*)(puVar4 + 0x31) = 0;
  puVar4[0x28] = 0;
  puVar4[0x29] = 0;
  *(void*)(puVar4 + 0x2a) = 0;
  puVar4[0x2b] = 0;
  puVar4[0x2c] = 0;
  *(void*)((int64_t)puVar4 + 0x165) = 0;
  *(void*)((int64_t)puVar4 + 0x18c) = 0;
  *(void*)((int64_t)puVar4 + 0x194) = 0;
  *(void*)((int64_t)puVar4 + 0x199) = 0;
  puVar4[0x35] = 0;
  puVar4[0x36] = 0;
  puVar4[0x37] = 0;
  puVar4[0x38] = 0;
  *puVar4 = &g_0269c118;
  puVar4[2] = &g_0269cc70;
  pVar6 = 0x269ccb0;
  puVar4[0x39] = &g_0269ccb0;
  puVar4[0x45] = 0;
  *(void*)(puVar4 + 0x46) = 0;
  puVar4[0x47] = 0;
  puVar4[0x3a] = 0;
  puVar4[0x3b] = 0;
  *(void*)(puVar4 + 0x3c) = 0;
  puVar4[0x3d] = 0;
  puVar4[0x3e] = 0;
  puVar4[0x3f] = 0;
  puVar4[0x40] = 0;
  *(void*)((int64_t)puVar4 + 0x205) = 0;
  puVar4[0x42] = 0;
  puVar4[0x43] = 0;
  *(void*)((int64_t)puVar4 + 0x21d) = 0;
  (*g_0269c130)();
  puVar1 = *(void**)(this_ptr + 0x98);
  if (puVar1 == puVar4) {
    FUN_00d50b20();
  }
  else {
    *(void**)(this_ptr + 0x98) = puVar4;
    if (puVar1 != (void*)0x0) {
      FUN_00d50b20();
    }
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x9c8))();
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x4d0))(uVar7,param_2);
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  (**(code **)(**(int64_t **)(this_ptr + 0x90) + 0x640))();
  (**(code **)(*local_98 + 0x370))();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar2 + 0x9d8))();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0x3a0))();
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  FUN_00d50b00();
  (**(code **)(*plVar2 + 0xa20))();
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar3 = g_027057c8;
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  if (g_027057c8 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*plVar2 + 0xa10))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  plVar2 = *(int64_t **)(this_ptr + 0x98);
  pvVar5 = _pthread_getspecific(pVar6);
  if (pvVar5 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_012e6000();
  if (local_30 == '\0') {
    if (local_38 != (int64_t *)0x0) {
      FUN_00d50b00();
    }
  }
  else {
    local_30 = '\0';
  }
  (**(code **)(*plVar2 + 0x968))();
  if (local_38 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e40eb0();
  lVar3 = *(int64_t *)(this_ptr + 0x98);
  if (lVar3 != 0) {
    FUN_00d50b00();
  }
  (**(code **)(*local_38 + 0x450))();
  if (lVar3 != 0) {
    FUN_00d50b20();
  }
  if ((local_30 != '\0') && (local_38 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  FUN_01e42250();
  (**(code **)(**(int64_t **)(this_ptr + 0x98) + 0xab8))();
  return;
}



// ============================================================
// 003b9dd0
// ============================================================
// Function: FUN_003b9dd0
// Address: 003b9dd0
// Size: 1142 bytes
// Class: MDAudioTrackHeaderViewController

void FUN_003b9dd0(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  char local_70;
  int64_t local_68;
  char local_60;
  int64_t local_38;
  char local_30;
  
  FUN_003ba530();
  if ((local_30 == '\0') && (local_38 != 0)) {
    FUN_00d50b00();
  }
  if (*arg1 == local_38) goto LAB_003ba053;
  if ((this_ptr[0x14] != 0) && (FUN_00d50130(), this_ptr[0x14] != 0)) {
    this_ptr[0x14] = 0;
    FUN_00d50b20();
  }
  if (((this_ptr[0x15] != 0) && (*arg1 == 0)) && (FUN_00d50130(), this_ptr[0x15] != 0)) {
    this_ptr[0x15] = 0;
    FUN_00d50b20();
  }
  lVar1 = this_ptr[0xf];
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01d2a770();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*arg1 == 0) goto LAB_003ba053;
  FUN_00d50b00();
  local_d8 = g_027057b8;
  if (g_027057b8 != 0) {
    FUN_00d50b00();
  }
  lVar1 = g_026f6d50;
  local_d0 = '\x01';
  if (g_026f6d50 != 0) {
    FUN_00d50b00();
  }
  local_c8 = lVar1;
  local_c0 = '\x01';
  local_b8 = *arg1;
  local_b0 = '\0';
  FUN_000bf690(&local_c8,&local_d8,&local_b8);
  lVar1 = this_ptr[0x14];
  lVar2 = lVar1;
  if (lVar1 != local_38) {
    lVar2 = local_38;
    if (local_30 == '\0') {
      if (local_38 == 0) {
        lVar2 = 0;
        goto LAB_003b9f80;
      }
      FUN_00d50b00();
      lVar1 = this_ptr[0x14];
      this_ptr[0x14] = local_38;
    }
    else {
      local_30 = '\0';
LAB_003b9f80:
      this_ptr[0x14] = lVar2;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar2 = local_38;
    }
  }
  if ((local_30 != '\0') && (lVar2 != 0)) {
    FUN_00d50b20();
  }
  if ((local_b0 != '\0') && (local_b8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d0 != '\0') && (local_d8 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  if (this_ptr[0x15] == 0) {
    FUN_00d50b00();
    local_a8 = g_027057c0;
    if (g_027057c0 != 0) {
      FUN_00d50b00();
    }
    lVar1 = g_026f6e70;
    local_a0 = '\x01';
    if (g_026f6e70 != 0) {
      FUN_00d50b00();
    }
    local_98 = lVar1;
    local_90 = '\x01';
    local_88 = 0;
    local_80 = '\0';
    FUN_000bf690(&local_98,&local_a8,&local_88);
    lVar1 = this_ptr[0x15];
    lVar2 = lVar1;
    if (lVar1 != local_38) {
      lVar2 = local_38;
      if (local_30 == '\0') {
        if (local_38 == 0) {
          lVar2 = 0;
          goto LAB_003ba10d;
        }
        FUN_00d50b00();
        lVar1 = this_ptr[0x15];
        this_ptr[0x15] = local_38;
      }
      else {
        local_30 = '\0';
LAB_003ba10d:
        this_ptr[0x15] = lVar2;
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
        lVar2 = local_38;
      }
    }
    if ((local_30 != '\0') && (lVar2 != 0)) {
      FUN_00d50b20();
    }
    if ((local_80 != '\0') && (local_88 != 0)) {
      FUN_00d50b20();
    }
    if ((local_90 != '\0') && (local_98 != 0)) {
      FUN_00d50b20();
    }
    if ((local_a0 != '\0') && (local_a8 != 0)) {
      FUN_00d50b20();
    }
    if (this_ptr != (int64_t *)0x0) {
      FUN_00d50b20();
    }
    lVar1 = g_026fe410;
    if (g_026fe410 != 0) {
      FUN_00d50b00();
    }
    local_78 = lVar1;
    local_70 = '\x01';
    local_68 = 0;
    local_60 = '\0';
    FUN_000bf780();
    if ((local_60 != '\0') && (local_68 != 0)) {
      FUN_00d50b20();
    }
    if ((local_70 != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
  }
  (**(code **)(*this_ptr + 0x5c0))();
LAB_003ba053:
  if (local_38 != 0) {
    FUN_00d50b20();
  }
  return;
}



// ============================================================
// 003c0750
// ============================================================
// Function: FUN_003c0750
// Address: 003c0750
// Size: 855 bytes
// Class: MDAudioTrackHeaderViewController

void FUN_003c0750(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  char cVar2;
  void*puVar3;
  char *pcVar4;
  void*this_ptr;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  int64_t local_40;
  char local_38 [8];
  
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  (*g_02572370)();
  if (param_2 == 0) {
    FUN_01c00e50();
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = lVar1;
    FUN_00d21140();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    FUN_00d23310();
    pcVar4 = local_38;
    if (local_38[0] == '\0') {
      pcVar4 = &local_50;
    }
    local_50 = local_38[0];
    *pcVar4 = '\0';
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    cVar2 = FUN_01bc0690();
    if ((local_50 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01c00e50();
      FUN_01bbfb40();
      FUN_01beea30();
      lVar1 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar1;
      FUN_00d23480();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
    FUN_01c00e50();
    cVar2 = FUN_01bc0690();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (cVar2 != '\0') {
      FUN_01c00e50();
      lVar1 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      local_38[0] = '\0';
      local_40 = lVar1;
      FUN_00d21140();
      if ((local_38[0] != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
    }
    FUN_01c00e50();
    FUN_01bbfb40();
    FUN_01beea30();
    lVar1 = CONCAT71(uStack_4f,local_50);
    if (local_48 == '\0') {
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_48 = '\0';
    }
    local_38[0] = '\0';
    local_40 = lVar1;
    FUN_00d23480();
    if ((local_38[0] != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
      FUN_00d50b20();
    }
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  *this_ptr = puVar3;
  *(void*)(this_ptr + 1) = 1;
  return;
}



// ============================================================
// 003bef50
// ============================================================
// Function: FUN_003bef50
// Address: 003bef50
// Size: 786 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"

void*
FUN_003bef50(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  char cVar2;
  void*puVar3;
  int64_t **pplVar4;
  int iVar5;
  void*this_ptr;
  uint32_t uVar6;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  int64_t *local_90;
  char local_88;
  int64_t in_stack_ffffffffffffff88;
  uint64_t uVar7;
  char in_stack_ffffffffffffff90;
  uint8_t uVar8;
  int iVar9;
  uint64_t uVar10;
  int iVar11;
  int64_t lVar12;
  int64_t *local_40;
  char local_38;
  
  FUN_003c0750();
  if ((in_stack_ffffffffffffff90 == '\0') && (in_stack_ffffffffffffff88 != 0)) {
    FUN_00d50b00();
  }
  puVar3 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar3 = &g_02572358;
  uVar6 = (*g_02572370)();
  if (in_stack_ffffffffffffff88 == 0) {
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    uVar10 = 0xffffffff;
    iVar11 = 0;
    iVar5 = 0;
    lVar12 = in_stack_ffffffffffffff88;
    while( true ) {
      if (iVar5 != 0) {
        if (iVar5 < 1) {
          iVar5 = -iVar5;
        }
        else {
          uVar10 = (uint64_t)(uint)((int)uVar10 - iVar5);
          FUN_00d23690(uVar6,iVar5,param_3,param_4,uVar7,uVar8,in_stack_ffffffffffffff88,uVar10,
                       iVar11,puVar3,lVar12);
          iVar11 = iVar11 + iVar5;
          iVar5 = 0;
        }
        uVar10 = CONCAT44(iVar5,(int)uVar10);
      }
      iVar9 = (int)uVar10;
      iVar5 = iVar9 + 1;
      uVar10 = CONCAT44((int)(uVar10 >> 0x20),iVar5);
      if (*(int *)(in_stack_ffffffffffffff88 + 0xc) <= iVar5) break;
      uVar7 = *(void*)
               (*(int64_t *)(in_stack_ffffffffffffff88 + 0x10) + 8 + (int64_t)iVar9 * 8);
      uVar6 = FUN_01bc1260();
      plVar1 = local_40;
      // [STATIC_INIT: property registration]
      pplVar4 = (int64_t **)&g_02802688;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x360))();
        cVar2 = FUN_00e85ea0();
        pplVar4 = &local_40;
        uVar6 = extraout_XMM0_Da;
        if (cVar2 == '\0') {
          pplVar4 = (int64_t **)&g_02802688;
        }
      }
      plVar1 = *pplVar4;
      if (*(char *)(pplVar4 + 1) == '\0') {
        if (plVar1 != (int64_t *)0x0) {
          uVar6 = FUN_00d50b00();
        }
      }
      else {
        *(void*)(pplVar4 + 1) = 0;
      }
      if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
        uVar6 = FUN_00d50b20();
      }
      if (plVar1 != (int64_t *)0x0) {
        FUN_003ba530();
        plVar1 = local_40;
        if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if (plVar1 != (int64_t *)0x0) {
          FUN_003ba530();
          if (local_88 == '\0') {
            if (local_90 != (int64_t *)0x0) {
              FUN_00d50b00();
            }
          }
          else {
            local_88 = '\0';
          }
          local_40 = local_90;
          local_38 = '\0';
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          if (local_90 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
        }
        uVar6 = FUN_00d50b20();
      }
      iVar5 = (int)(uVar10 >> 0x20);
    }
    FUN_002e0650();
    *this_ptr = puVar3;
    *(void*)(this_ptr + 1) = 1;
    FUN_00d50b20();
  }
  return this_ptr;
}



// ============================================================
// 0070f2e0
// ============================================================
// Function: FUN_0070f2e0
// Address: 0070f2e0
// Size: 754 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"

uint64_t FUN_0070f2e0(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01beea30();
    lVar3 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0xc) < 1) {
LAB_0070f4c2:
        uVar8 = 0;
      }
      else {
        FUN_00d23310();
        lVar1 = local_48;
        pcVar6 = local_38;
        if (local_40[0] != '\0') {
          pcVar6 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pplVar7 = &local_58;
        FUN_01bc1260();
        plVar2 = local_58;
        // [STATIC_INIT: property registration]
        if (plVar2 == (int64_t *)0x0) {
LAB_0070f3e4:
          pplVar7 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') goto LAB_0070f3e4;
        }
        plVar2 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 == (int64_t *)0x0) goto LAB_0070f4c2;
        FUN_003ba530();
        lVar1 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0070f482;
          }
LAB_0070f4e9:
          uVar8 = 0;
        }
        else {
LAB_0070f482:
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_003b7780();
            FUN_003bf7a0(0,0,1 < *(int *)(lVar3 + 0xc));
          }
          if (lVar1 == 0) goto LAB_0070f4e9;
          uVar8 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0070f4fb;
    }
  }
  uVar8 = 0;
LAB_0070f4fb:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 0070f740
// ============================================================
// Function: FUN_0070f740
// Address: 0070f740
// Size: 754 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"

uint64_t FUN_0070f740(uint64_t param_1,char param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int64_t **pplVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int64_t *local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x10) != 0) {
    FUN_00d50b00();
    FUN_00d50b20();
    lVar1 = *(int64_t *)(this_ptr + 0x10);
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    FUN_01beea30();
    lVar3 = local_48;
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
      }
    }
    else {
      local_40[0] = '\0';
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if (lVar3 != 0) {
      if (*(int *)(lVar3 + 0xc) < 1) {
LAB_0070f922:
        uVar8 = 0;
      }
      else {
        FUN_00d23310();
        lVar1 = local_48;
        pcVar6 = local_38;
        if (local_40[0] != '\0') {
          pcVar6 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar6 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        pplVar7 = &local_58;
        FUN_01bc1260();
        plVar2 = local_58;
        // [STATIC_INIT: property registration]
        if (plVar2 == (int64_t *)0x0) {
LAB_0070f844:
          pplVar7 = (int64_t **)&g_02802688;
        }
        else {
          (**(code **)(*plVar2 + 0x360))();
          cVar4 = FUN_00e85ea0();
          if (cVar4 == '\0') goto LAB_0070f844;
        }
        plVar2 = *pplVar7;
        if (*(char *)(pplVar7 + 1) == '\0') {
          if (plVar2 != (int64_t *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(void*)(pplVar7 + 1) = 0;
        }
        if ((local_50 != '\0') && (local_58 != (int64_t *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (plVar2 == (int64_t *)0x0) goto LAB_0070f922;
        FUN_003ba530();
        lVar1 = local_48;
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_0070f8e2;
          }
LAB_0070f949:
          uVar8 = 0;
        }
        else {
LAB_0070f8e2:
          if ((lVar1 != 0) && (param_2 != '\0')) {
            FUN_003b7710();
            FUN_003bcea0(0,0,1 < *(int *)(lVar3 + 0xc));
          }
          if (lVar1 == 0) goto LAB_0070f949;
          uVar8 = CONCAT71((int7)((uint64_t)pplVar7 >> 8),1);
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
      FUN_00d50b20();
      goto LAB_0070f95b;
    }
  }
  uVar8 = 0;
LAB_0070f95b:
  return uVar8 & 0xffffffff;
}



// ============================================================
// 003bf380
// ============================================================
// Function: FUN_003bf380
// Address: 003bf380
// Size: 682 bytes
// Class: MDAudioTrackHeaderViewController

uint64_t FUN_003bf380(uint64_t param_1,char param_2)

{
  char cVar1;
  uint8_t uVar2;
  char *pcVar3;
  uint64_t unaff_RBX;
  int64_t *plVar4;
  int64_t *this_ptr;
  int64_t local_60;
  char local_58;
  int64_t *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_003ba530();
  pcVar3 = local_38;
  if (local_40[0] != '\0') {
    pcVar3 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar3 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  plVar4 = (int64_t *)CONCAT71((int7)((uint64_t)unaff_RBX >> 8),local_48 != (int64_t *)0x0);
  if ((local_48 != (int64_t *)0x0) && (param_2 != '\0')) {
    FUN_01caea20();
    FUN_003bc3e0();
    if ((local_40[0] == '\0') && (local_48 != (int64_t *)0x0)) {
      FUN_00d50b00();
    }
    cVar1 = FUN_0071f9e0();
    if (cVar1 != '\0') {
      FUN_01c00e50();
      FUN_01bbfb40();
      if (local_40[0] == '\0') {
        if (local_48 != (int64_t *)0x0) {
          FUN_00d50b00();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
        }
      }
      else {
        local_40[0] = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      plVar4 = local_48;
      if (local_48 != (int64_t *)0x0) {
        FUN_002e9590();
        if (local_48 != (int64_t *)0x0) {
          if (local_40[0] == '\0') {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
              FUN_00d50b20();
            }
          }
          if ((int64_t *)this_ptr[0x11] != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)this_ptr[0x11] + 0x918))();
          }
          (**(code **)(*local_48 + 0x5d8))();
          FUN_006525e0();
          if ((local_40[0] != '\0') && (local_48 != (int64_t *)0x0)) {
            FUN_00d50b20();
          }
          (**(code **)(*this_ptr + 0x5c0))();
          FUN_003bc830();
          (**(code **)(*this_ptr + 0x5d8))();
          FUN_00d50b20();
          FUN_00d50b20();
          plVar4 = (int64_t *)CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          if (local_48 != (int64_t *)0x0) {
            FUN_00d50b20();
          }
          goto LAB_003bf606;
        }
        FUN_00d50b20();
      }
    }
    cVar1 = FUN_0071fab0();
    if (cVar1 == '\0') {
      uVar2 = FUN_0071fb80();
      FUN_003bf7a0(0,uVar2,0);
    }
    else {
      uVar2 = FUN_0071fb80();
      FUN_003bf7a0(1,uVar2,0);
      FUN_003ba640();
    }
    FUN_003bc830();
    (**(code **)(*this_ptr + 0x5d8))();
    plVar4 = (int64_t *)CONCAT71((int7)((uint64_t)plVar4 >> 8),1);
    if (local_48 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
LAB_003bf606:
  if ((local_38[0] != '\0') && (local_48 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return (uint64_t)plVar4 & 0xffffffff;
}



// ============================================================
// 003bf7a0
// ============================================================
// Function: FUN_003bf7a0
// Address: 003bf7a0
// Size: 693 bytes
// Class: MDAudioTrackHeaderViewController

void FUN_003bf7a0(uint32_t param_1,uint32_t param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  char *pcVar4;
  uint8_t unaff_SIL;
  int64_t this_ptr;
  int64_t local_c0;
  char local_b8;
  int64_t local_a0;
  char local_98;
  uint32_t local_90;
  uint32_t local_8c;
  int64_t local_88;
  char local_80;
  int64_t local_78;
  int64_t local_70;
  int64_t local_68;
  char local_60;
  int64_t local_58;
  char local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  local_90 = param_1;
  FUN_003ba530();
  lVar1 = local_48;
  pcVar4 = local_38;
  if (local_40[0] != '\0') {
    pcVar4 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar4 = '\0';
  if ((local_40[0] != '\0') && (local_48 != 0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    if ((*(int64_t **)(this_ptr + 0x88) != (int64_t *)0x0) &&
       (cVar3 = (**(code **)(**(int64_t **)(this_ptr + 0x88) + 0x9a0))(), cVar3 != '\0')) {
      local_8c = param_2;
      FUN_01e40eb0();
      lVar1 = local_48;
      if ((local_40[0] != '\0') && (local_48 != 0)) {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_003bb820();
        local_70 = local_48;
        if ((local_40[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        FUN_003bb720();
        local_78 = local_48;
        FUN_003bef50();
        local_60 = 0;
        if ((local_b8 == '\0') && (local_c0 != 0)) {
          FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = local_c0;
        FUN_003b7a90();
        local_58 = local_88;
        local_50 = 0;
        local_a0 = g_026fe4a8;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            FUN_00d50b00();
            local_a0 = g_026fe4a8;
          }
        }
        else {
          local_80 = '\0';
        }
        local_50 = '\x01';
        g_026fe4a8 = local_a0;
        if (local_a0 != 0) {
          local_50 = '\x01';
          FUN_00d50b00();
        }
        lVar1 = local_78;
        local_98 = '\x01';
        FUN_004b1320(&local_58,unaff_SIL,&local_a0,0);
        lVar2 = local_70;
        if ((local_98 != '\0') && (local_a0 != 0)) {
          FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if ((local_40[0] != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
      }
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  return;
}



// ============================================================
// 003b9370
// ============================================================
// Function: FUN_003b9370
// Address: 003b9370
// Size: 2207 bytes
// Class: MDAudioTrackHeaderViewController
// String references:
//   "MDAudioTrackHeaderViewController"
//   "handleEditClickedAction"
//   "handleReferenceClickedAction"
//   "handleRenameTrackAction"
//   "handleFinishEditingTrackName"
//   "onDetectionStateChanged"
//   "onLayerChanged"

void FUN_003b9370(void)

{
  int iVar1;
  
  // [STATIC_INIT: property registration]
      g_028083f0 = "handleEditClickedAction";
      g_028083f8 = &g_026e35c8;
      g_02808400 = 0;
      g_02808408 = &g_027058a8;
      g_02808410 = FUN_003c1590;
      g_02808418 = 0x5e9;
      g_02808420 = 0;
      ram_0000000002808428 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808438 = "handleReferenceClickedAction";
      g_02808440 = &g_026e35c8;
      g_02808448 = 0;
      g_02808450 = &g_027058a8;
      g_02808458 = FUN_003c1590;
      g_02808460 = 0x5f1;
      g_02808468 = 0;
      ram_0000000002808470 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808480 = "handleRenameTrackAction";
      g_02808488 = &g_026e35c8;
      g_02808490 = 0;
      g_02808498 = &g_027058a8;
      g_028084a0 = FUN_003c1590;
      g_028084a8 = 0x5f9;
      g_028084b0 = 0;
      ram_00000000028084b8 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_028084c8 = "handleFinishEditingTrackName";
      g_028084d0 = &g_026e35c8;
      g_028084d8 = 0;
      g_028084e0 = &g_027058a8;
      g_028084e8 = FUN_003c1590;
      g_028084f0 = 0x601;
      g_028084f8 = 0;
      ram_0000000002808500 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808510 = "onDetectionStateChanged";
      g_02808518 = &g_026e35c8;
      g_02808520 = 0;
      g_02808528 = &g_027058ac;
      g_02808530 = FUN_003c1620;
      g_02808538 = 0x609;
      g_02808540 = 0;
      ram_0000000002808548 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  // [STATIC_INIT: property registration]
      g_02808558 = "onLayerChanged";
      g_02808560 = &g_026e35c8;
      g_02808568 = 0;
      g_02808570 = &g_027058ac;
      g_02808578 = FUN_003c1620;
      g_02808580 = 0x611;
      g_02808588 = 0;
      ram_0000000002808590 = 0;
      ___cxa_guard_release();
    }
  }
  FUN_00e87c70();
  return;
}

