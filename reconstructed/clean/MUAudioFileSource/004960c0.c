// Function: FUN_004960c0
// Address: 004960c0
// Size: 545 bytes
// Class: MUAudioFileSource

uint64_t FUN_004960c0(uint64_t param_1,int param_2)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  void *pvVar6;
  int64_t this_ptr;
  float fVar7;
  uint32_t uVar8;
  int64_t local_60;
  char local_58;
  int local_48;
  
  lVar3 = local_60;
  if (param_2 == 0) {
    return 1;
  }
  fVar7 = (float)(**(code **)(**(int64_t **)(this_ptr + 0x100) + 0x930))();
  FUN_0048a5a0();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0049621d;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0049621d;
  local_58 = '\0';
  local_60 = 0;
  local_48 = -1;
  fVar7 = g_02390124 - fVar7;
  while( true ) {
    lVar5 = (int64_t)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(lVar3 + 0xc) <= local_48) break;
    lVar1 = *(int64_t *)(lVar3 + 0x10);
    local_60 = *(int64_t *)(lVar1 + 8 + lVar5 * 8);
    pvVar6 = _pthread_getspecific((void*)lVar1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013d7dd0(fVar7);
  }
  FUN_00115190();
  FUN_00d50b20();
LAB_0049621d:
  FUN_0047dd70();
  iVar4 = FUN_01caecd0();
  plVar2 = *(int64_t **)(this_ptr + 0x100);
  if (iVar4 == 3) {
    (**(code **)(*plVar2 + 0x6e0))();
  }
  else {
    (**(code **)(*plVar2 + 0x6b0))();
    if (local_58 == '\0') {
      if (local_60 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_58 = '\0';
    }
    uVar8 = FUN_01e3f820();
    (**(code **)(*plVar2 + 0x6d8))(uVar8,0);
    if (local_60 != 0) {
      FUN_00d50b20();
    }
    if ((local_58 != '\0') && (local_60 != 0)) {
      FUN_00d50b20();
    }
  }
  return 1;
}

