// Function: FUN_005201d0
// Address: 005201d0
// Size: 924 bytes
// Class: MDPluginDocument

void FUN_005201d0(void)

{
  int64_t lVar1;
  bool bVar2;
  char cVar3;
  int64_t lVar4;
  int64_t this_ptr;
  int64_t *plVar5;
  bool bVar6;
  int64_t *local_b0;
  char local_a8;
  int64_t local_70;
  char local_68;
  int64_t *local_50;
  char local_48;
  int local_38;
  
  FUN_00b342a0();
  if ((*(int64_t *)(this_ptr + 0x308) == 0) && (*(int64_t *)(this_ptr + 0xe8) != 0)) {
    FUN_00b34cb0();
    if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
      (**(code **)(*local_50 + 0x10))();
      FUN_00d50b20();
    }
    if (local_50 != (int64_t *)0x0) {
      FUN_00b34cb0();
      (**(code **)(*local_b0 + 0x70))();
      if (local_50 == (int64_t *)0x0) {
        bVar2 = true;
        plVar5 = (int64_t *)0x0;
      }
      else {
        plVar5 = local_50;
        if (local_48 == '\0') {
          FUN_00d50b00();
          bVar2 = false;
        }
        else {
          local_48 = '\0';
          bVar2 = false;
        }
      }
      if ((local_a8 != '\0') && (local_b0 != (int64_t *)0x0)) {
        (**(code **)(*local_b0 + 0x10))();
        FUN_00d50b20();
      }
      lVar1 = g_0270b800;
      if (plVar5 != (int64_t *)0x0) {
        if (g_0270b800 != 0) {
          FUN_00d50b00();
        }
        cVar3 = FUN_00d90eb0();
        if (cVar3 == '\0') {
          bVar6 = false;
        }
        else {
          bVar6 = *(char *)(this_ptr + 0x248) != '\0';
        }
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if (bVar6) {
          FUN_0051c820();
          *(void*)(this_ptr + 0x24a) = 0;
        }
        if (!bVar2) {
          FUN_00d50b20();
        }
      }
    }
  }
  if (*(int64_t **)(this_ptr + 0x278) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(this_ptr + 0x278) + 0x370))();
    FUN_012dddb0();
    if (*(int64_t *)(this_ptr + 0x278) != 0) {
      *(void*)(this_ptr + 0x278) = 0;
      FUN_00d50b20();
    }
  }
  if ((*(int64_t **)(this_ptr + 0xe8) != (int64_t *)0x0) &&
     ((**(code **)(**(int64_t **)(this_ptr + 0xe8) + 0x370))(),
     *(int64_t *)(this_ptr + 0xe8) != 0)) {
    *(void*)(this_ptr + 0xe8) = 0;
    FUN_00d50b20();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x2e8);
  if (lVar1 != 0) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    local_38 = -1;
    while( true ) {
      lVar4 = (int64_t)local_38;
      local_38 = local_38 + 1;
      if (*(int *)(lVar1 + 0xc) <= local_38) break;
      local_50 = *(int64_t **)(*(int64_t *)(lVar1 + 0x10) + 8 + lVar4 * 8);
      (**(code **)(*local_50 + 0x370))();
    }
    FUN_00540a20();
  }
  *(void*)(this_ptr + 0x240) = 0;
  *(void*)(this_ptr + 0x248) = 0;
  FUN_00d403d0();
  lVar1 = g_026fb7e0;
  if (g_026fb7e0 != 0) {
    FUN_00d50b00();
  }
  FUN_00d50b00();
  local_70 = 0;
  local_68 = '\0';
  FUN_00d40470(&local_70,&stack0xffffffffffffffa0,1,3);
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_48 != '\0') && (local_50 != (int64_t *)0x0)) {
    FUN_00d50b20();
  }
  return;
}

