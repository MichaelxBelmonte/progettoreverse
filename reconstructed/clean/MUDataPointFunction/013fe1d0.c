// Function: FUN_013fe1d0
// Address: 013fe1d0
// Size: 572 bytes
// Class: MUDataPointFunction

void FUN_013fe1d0(void)

{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t this_ptr;
  int64_t *local_50;
  char local_48;
  
  cVar1 = *(char *)(this_ptr + 0xc);
joined_r0x013fe1e6:
  if (cVar1 != '\0') {
    lVar2 = *(int64_t *)(this_ptr + 0x20);
    if (lVar2 != 0) {
      for (lVar3 = 0; (int)lVar3 < *(int *)(lVar2 + 0xc); lVar3 = lVar3 + 1) {
        (**(code **)(**(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar3 * 8) + 0x3c0))();
      }
      FUN_013fe7c0();
    }
    *(void*)(this_ptr + 0xd) = 1;
    return;
  }
  do {
    FUN_013fe550();
    if (local_48 == '\0') {
      if (local_50 == (int64_t *)0x0) break;
      FUN_00d50b00();
    }
    else if (local_50 == (int64_t *)0x0) break;
    local_48 = '\0';
    FUN_00d235a0();
    FUN_00d50b20();
  } while( true );
LAB_013fe2a8:
  FUN_013fe550();
  if (local_48 == '\0') {
    if (local_50 == (int64_t *)0x0) goto LAB_013fe340;
    FUN_00d50b00();
  }
  else if (local_50 == (int64_t *)0x0) goto LAB_013fe340;
  local_48 = '\0';
  FUN_00d23f50();
  FUN_00d50b20();
  goto LAB_013fe2a8;
LAB_013fe340:
  (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x368))();
  lVar2 = *(int64_t *)(this_ptr + 0x20);
  if (lVar2 != 0) {
    local_48 = '\0';
    local_50 = (int64_t *)0x0;
    for (lVar3 = 0; lVar3 < *(int *)(lVar2 + 0xc); lVar3 = lVar3 + 1) {
      local_50 = *(int64_t **)(*(int64_t *)(lVar2 + 0x10) + lVar3 * 8);
      (**(code **)(*local_50 + 0x3a0))();
    }
    FUN_013fe7c0();
  }
  (**(code **)(**(int64_t **)(this_ptr + 0x30) + 0x378))();
  FUN_00da68a0(g_02390108);
  cVar1 = *(char *)(this_ptr + 0xc);
  goto joined_r0x013fe1e6;
}

