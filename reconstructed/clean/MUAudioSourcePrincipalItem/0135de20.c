// Function: FUN_0135de20
// Address: 0135de20
// Size: 1178 bytes
// Class: MUAudioSourcePrincipalItem

uint64_t FUN_0135de20(uint64_t param_1,char param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  void*puVar4;
  void *pvVar5;
  int64_t lVar6;
  void* pVar7;
  void*puVar8;
  uint64_t uVar9;
  int64_t *arg1;
  int64_t this_ptr;
  uint8_t local_78 [8];
  uint8_t local_70;
  int64_t local_68;
  char local_60;
  void*local_58;
  char local_50;
  void*local_48;
  char local_40;
  char local_31;
  
  local_48 = (void*)*arg1;
  local_40 = '\0';
  uVar2 = FUN_00d23d70();
  uVar9 = (uint64_t)uVar2;
  if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  local_31 = (char)uVar2;
  if (local_31 == '\0') goto LAB_0135e071;
  FUN_01329970();
  FUN_01329030();
  local_48 = (void*)*arg1;
  local_40 = '\0';
  cVar1 = FUN_00d24090();
  if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if (cVar1 != '\0') {
    FUN_0134ad30();
  }
  local_48 = (void*)*arg1;
  local_40 = '\0';
  uVar2 = FUN_00d24090();
  puVar8 = (void*)(uint64_t)uVar2;
  if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
    FUN_00d50b20();
  }
  if ((char)uVar2 == '\0') {
    FUN_0134b100();
  }
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  pVar7 = 0x2572358;
  *puVar4 = &g_02572358;
  (*g_02572370)();
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (puVar8 = *(void**)(this_ptr + 0x148), puVar8 != (void*)0x0)) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      puVar8 = *(void**)(this_ptr + 0x148);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        puVar8 = (void*)puVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0135dfa8;
    if (param_2 != '\0') {
      local_68 = *arg1;
      local_60 = '\0';
      FUN_0135dd30();
      puVar8 = local_58;
      if (local_50 == '\0') {
        if (local_58 != (void*)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_70 = 1;
      pVar7 = 1;
      FUN_01355320(1,local_78,0);
      if (puVar4 == local_48) {
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar4 = local_48;
        if (local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
      if (puVar8 != (void*)0x0) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (void*)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != 0)) {
        FUN_00d50b20();
      }
    }
  }
  else {
LAB_0135dfa8:
    FUN_0135e480();
    if (puVar4 == local_48) {
      if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
        FUN_00d50b20();
      }
    }
    else {
      puVar4 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (void*)0x0) {
          FUN_00d50b00();
        }
        FUN_00d50b20();
      }
      else {
        FUN_00d50b20();
      }
    }
    if (*(int *)((int64_t)puVar4 + 0xc) == 0) {
      FUN_0135e940();
      puVar8 = local_48;
      if (local_48 == puVar4) {
        if ((local_40 != '\0') && (local_48 != (void*)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        puVar4 = puVar8;
        if (local_40 == '\0') {
          if (local_48 != (void*)0x0) {
            FUN_00d50b00();
          }
          FUN_00d50b20();
        }
        else {
          FUN_00d50b20();
        }
      }
    }
  }
  if (((*(int64_t *)(this_ptr + 0x1f8) == 0) && (*(int64_t *)(this_ptr + 0x200) == 0)) &&
     (puVar8 = *(void**)(this_ptr + 0x148), puVar8 != (void*)0x0)) {
    pvVar5 = _pthread_getspecific(pVar7);
    if (pvVar5 != (void *)0x0) {
      puVar8 = *(void**)(this_ptr + 0x148);
      lVar6 = FUN_00e8b990();
      if (lVar6 != 0) {
        puVar8 = (void*)puVar8[(uint64_t)(*(uint *)(lVar6 + 0x154) & 1) + 4];
      }
    }
    iVar3 = FUN_0141bab0();
    if (iVar3 != 3) goto LAB_0135e035;
LAB_0135e041:
    uVar9 = CONCAT71((int7)((uint64_t)puVar8 >> 8),local_31);
    if (*(int *)((int64_t)puVar4 + 0xc) != 0) {
      FUN_013357a0();
    }
  }
  else {
LAB_0135e035:
    cVar1 = FUN_01334f30();
    if (cVar1 != '\0') goto LAB_0135e041;
    uVar9 = CONCAT71((int7)((uint64_t)puVar8 >> 8),local_31);
    if (puVar4 == (void*)0x0) goto LAB_0135e071;
  }
  FUN_00d50b20();
LAB_0135e071:
  return uVar9 & 0xffffffff;
}

