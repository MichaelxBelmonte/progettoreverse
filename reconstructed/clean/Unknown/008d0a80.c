// Function: FUN_008d0a80
// Address: 008d0a80
// Size: 1106 bytes
// Class: Unknown
// String references:
//   "openConnection"
//   "openConnection failed: unknown result"

void FUN_008d0a80(void)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int iVar4;
  void*puVar5;
  char *pcVar6;
  string *this;
  string *psVar7;
  int64_t this_ptr;
  uint32_t uVar8;
  char local_5c [40];
  int local_34;
  
  pcVar6 = local_5c;
  local_5c[0] = '\0';
  local_5c[1] = '\0';
  local_5c[2] = '\0';
  local_5c[3] = '\0';
  local_5c[4] = '\0';
  local_5c[5] = '\0';
  local_5c[6] = '\0';
  local_5c[7] = '\0';
  local_5c[8] = '\0';
  local_5c[9] = '\0';
  local_5c[10] = '\0';
  local_5c[0xb] = '\0';
  local_5c[0xc] = '\0';
  local_5c[0xd] = '\0';
  local_5c[0xe] = '\0';
  local_5c[0xf] = '\0';
  local_5c[0x10] = '\0';
  local_5c[0x11] = '\0';
  local_5c[0x12] = '\0';
  local_5c[0x13] = '\0';
  local_5c[0x14] = '\0';
  local_5c[0x15] = '\0';
  local_5c[0x16] = '\0';
  local_5c[0x17] = '\0';
  local_5c[0x18] = '\0';
  local_5c[0x19] = '\0';
  local_5c[0x1a] = '\0';
  local_5c[0x1b] = '\0';
  psVar7 = (string *)&local_34;
  (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xb8))();
  if (local_34 != 2) {
    if (local_34 == 3) {
      this = (string *)&g_02517398;
      FUN_00ad1420();
      (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xc0))();
      plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 8);
      plVar3 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 0x10);
      if (plVar3 != (int64_t *)0x0) {
        LOCK();
        plVar3[1] = plVar3[1] + 1;
        UNLOCK();
      }
      (**(code **)(*plVar2 + 0x40))();
      if (plVar3 != (int64_t *)0x0) {
        LOCK();
        plVar2 = plVar3 + 1;
        lVar1 = *plVar2;
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (lVar1 == 0) {
          (**(code **)(*plVar3 + 0x10))();
          std::__shared_weak_count::__release_weak();
        }
      }
      puVar5 = (void*)___cxa_allocate_exception();
      *puVar5 = &g_02517278;
      uVar8 = std::string::string(this,psVar7);
      *puVar5 = &g_02517398;
      *(void*)(puVar5 + 4) = 0;
                          ___cxa_throw(uVar8,FUN_0088c8a0);
    }
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x160))();
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xc0))();
    plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 8);
    plVar3 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 0x10);
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x40))();
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  iVar4 = std::string::compare(pcVar6);
  if (iVar4 != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x160))();
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xc0))();
    plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 8);
    plVar3 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 0x10);
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar3[1] = plVar3[1] + 1;
      UNLOCK();
    }
    (**(code **)(*plVar2 + 0x40))();
    if (plVar3 != (int64_t *)0x0) {
      LOCK();
      plVar2 = plVar3 + 1;
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (lVar1 == 0) {
        (**(code **)(*plVar3 + 0x10))();
        std::__shared_weak_count::__release_weak();
      }
    }
  }
  FUN_008cf6b8();
  (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0xc0))();
  plVar2 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 8);
  plVar3 = *(int64_t **)(*(int64_t *)(this_ptr + 0x28) + 0x10);
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar3[1] = plVar3[1] + 1;
    UNLOCK();
  }
  (**(code **)(*plVar2 + 0x40))();
  if (plVar3 != (int64_t *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))();
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar5 = (void*)___cxa_allocate_exception();
  FUN_008d085a();
  uVar8 = FUN_008d3e60();
  *puVar5 = &g_02517398;
  *(void*)(puVar5 + 4) = 5;
                      ___cxa_throw(uVar8,FUN_0088c8a0);
}

