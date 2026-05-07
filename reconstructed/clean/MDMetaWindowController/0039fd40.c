// Function: FUN_0039fd40
// Address: 0039fd40
// Size: 1028 bytes
// Class: MDMetaWindowController

void FUN_0039fd40(float param_1,float param_2)

{
  int64_t lVar1;
  void *pvVar2;
  void* pVar3;
  int64_t in_RCX;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t *this_ptr;
  float fVar7;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int local_48;
  float local_34;
  
  lVar5 = local_60;
  (**(code **)(*this_ptr + 0x988))();
  if (local_58 == '\0') {
    if (local_60 == 0) goto LAB_0039ffa7;
    FUN_00d50b00();
  }
  else if (local_60 == 0) goto LAB_0039ffa7;
  local_58 = '\0';
  local_60 = 0;
  local_48 = -1;
  while( true ) {
    lVar1 = (int64_t)local_48;
    local_48 = local_48 + 1;
    if (*(int *)(lVar5 + 0xc) <= local_48) break;
    lVar4 = *(int64_t *)(lVar5 + 0x10);
    local_60 = *(int64_t *)(lVar4 + 8 + lVar1 * 8);
    FUN_004f9670();
    pVar3 = (void*)lVar4;
    if (local_68 == '\0') {
      if (local_70 != 0) {
        FUN_00d50b00();
      }
    }
    else {
      local_68 = '\0';
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    fVar7 = (float)FUN_004faf50();
    fVar7 = fVar7 + (param_2 - param_1);
    local_34 = 0.0;
    if ((0.0 <= fVar7) && (local_34 = fVar7, g_02390124 < fVar7)) {
      local_34 = g_02390124;
    }
    pvVar2 = _pthread_getspecific(pVar3);
    if (pvVar2 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_004faf40(local_34);
    if (local_70 != 0) {
      FUN_00d50b20();
    }
  }
  FUN_000be170();
  FUN_00d50b20();
  in_RCX = lVar5;
LAB_0039ffa7:
  FUN_019a47c0();
  if (local_58 == '\0') {
    if (local_60 == 0) {
      return;
    }
    FUN_00d50b00();
  }
  else if (local_60 == 0) {
    return;
  }
  if (0 < *(int *)(local_60 + 0xc)) {
    iVar6 = 0;
    do {
      FUN_004f9670();
      if (local_68 == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68 = '\0';
      }
      pvVar2 = _pthread_getspecific((void*)in_RCX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      fVar7 = (float)FUN_004faf50();
      fVar7 = fVar7 + (param_2 - param_1);
      local_34 = 0.0;
      if ((0.0 <= fVar7) && (local_34 = fVar7, g_02390124 < fVar7)) {
        local_34 = g_02390124;
      }
      pvVar2 = _pthread_getspecific((void*)in_RCX);
      if (pvVar2 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004faf40(local_34);
      if (local_70 != 0) {
        FUN_00d50b20();
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(local_60 + 0xc));
  }
  FUN_000be170();
  FUN_00d50b20();
  return;
}

