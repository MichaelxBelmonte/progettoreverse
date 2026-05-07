// Function: FUN_01aef330
// Address: 01aef330
// Size: 559 bytes
// Class: Unknown

void FUN_01aef330(uint64_t param_1,uint64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  void *pvVar3;
  int64_t lVar4;
  void* in_ECX;
  int64_t *this_ptr;
  int64_t *plVar5;
  uint32_t uVar6;
  uint32_t uVar7;
  float local_70;
  float local_6c;
  float local_68;
  uint32_t uStack_64;
  float local_54;
  int64_t *local_50;
  char local_48;
  int64_t *local_40;
  uint64_t local_38;
  
  uVar7 = (uint32_t)((uint64_t)param_2 >> 0x20);
  uVar6 = (uint32_t)param_2;
  uStack_64 = (uint32_t)((uint64_t)param_1 >> 0x20);
  local_68 = (float)param_1;
  FUN_01ad3cb0();
  plVar1 = local_40;
  if (((char)local_38 == '\0') && (local_40 != (int64_t *)0x0)) {
    FUN_00d50b00();
  }
  FUN_01a1d6e0();
  plVar2 = local_40;
  if ((char)local_38 == '\0') {
    if (local_40 == (int64_t *)0x0) goto LAB_01aef543;
    FUN_00d50b00();
    if (((char)local_38 != '\0') && (local_40 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
  }
  if ((plVar1 == (int64_t *)0x0) || (plVar2 == (int64_t *)0x0)) {
    if (plVar2 == (int64_t *)0x0) goto LAB_01aef543;
  }
  else {
    local_68 = (float)(**(code **)(*this_ptr + 0x920))(uStack_64);
    pvVar3 = _pthread_getspecific(in_ECX);
    plVar5 = plVar1;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    (**(code **)(*plVar5 + 0x3a8))(local_68);
    pvVar3 = _pthread_getspecific(in_ECX);
    plVar5 = plVar1;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    local_68 = (float)(**(code **)(*plVar5 + 0x3a0))();
    pvVar3 = _pthread_getspecific(in_ECX);
    plVar5 = plVar1;
    if ((pvVar3 != (void *)0x0) && (lVar4 = FUN_00e8b990(), lVar4 != 0)) {
      plVar5 = (int64_t *)plVar1[(uint64_t)(*(uint *)(lVar4 + 0x154) & 1) + 4];
    }
    local_54 = (float)(**(code **)(*plVar5 + 0x3a0))();
    FUN_01a1d6e0();
    local_40 = (int64_t *)(**(code **)(*local_50 + 0xa50))();
    local_38 = CONCAT44(uVar7,uVar6);
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01a1d6e0();
    (**(code **)(*local_50 + 0xa98))();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      FUN_00d50b20();
    }
    local_70 = local_54;
    local_6c = local_68 - local_54;
    (**(code **)(*plVar2 + 0xce0))((int)g_0241c7c0,&local_70);
  }
  FUN_00d50b20();
LAB_01aef543:
  if (plVar1 != (int64_t *)0x0) {
    FUN_00d50b20();
  }
  return;
}

