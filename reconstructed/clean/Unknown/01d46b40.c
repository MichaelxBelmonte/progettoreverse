// Function: FUN_01d46b40
// Address: 01d46b40
// Size: 507 bytes
// Class: Unknown

void FUN_01d46b40(void)

{
  int64_t lVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t uVar4;
  void*puVar5;
  int64_t lVar6;
  int64_t *arg1;
  void*this_ptr;
  int64_t local_40;
  char local_38;
  
  puVar5 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &g_02680ed8;
  *(void*)((int64_t)puVar5 + 0x54) = 0;
  *(void*)((int64_t)puVar5 + 0xc) = 0;
  *(void*)((int64_t)puVar5 + 0x14) = 0;
  *(void*)((int64_t)puVar5 + 0x1c) = 0;
  *(void*)((int64_t)puVar5 + 0x24) = 0;
  *(void*)((int64_t)puVar5 + 0x2c) = 0;
  *(void*)((int64_t)puVar5 + 0x34) = 0;
  *(void*)((int64_t)puVar5 + 0x3c) = 0;
  *(void*)((int64_t)puVar5 + 0x44) = 0;
  *(void*)((int64_t)puVar5 + 0x49) = 0;
  FUN_00d500e0();
  lVar1 = *(int64_t *)(*arg1 + 0x18);
  lVar6 = puVar5[3];
  if (lVar6 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar5[3] = lVar1;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *(int64_t *)(*arg1 + 0x20);
  lVar6 = puVar5[4];
  if (lVar6 != lVar1) {
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    puVar5[4] = lVar1;
    if (lVar6 != 0) {
      FUN_00d50b20();
    }
  }
  lVar1 = *arg1;
  uVar2 = *(void*)(lVar1 + 0x34);
  uVar3 = *(void*)(lVar1 + 0x38);
  uVar4 = *(void*)(lVar1 + 0x3c);
  *(void*)(puVar5 + 6) = *(void*)(lVar1 + 0x30);
  *(void*)((int64_t)puVar5 + 0x34) = uVar2;
  *(void*)(puVar5 + 7) = uVar3;
  *(void*)((int64_t)puVar5 + 0x3c) = uVar4;
  *(void*)(puVar5 + 8) = *(void*)(*arg1 + 0x40);
  *(void*)((int64_t)puVar5 + 0x44) = *(void*)(*arg1 + 0x44);
  *(void*)(puVar5 + 9) = *(void*)(*arg1 + 0x48);
  *(void*)((int64_t)puVar5 + 0x4c) = *(void*)(*arg1 + 0x4c);
  *(void*)(puVar5 + 10) = *(void*)(*arg1 + 0x50);
  *(void*)((int64_t)puVar5 + 0xc) = *(void*)(*arg1 + 0xc);
  *(void*)((int64_t)puVar5 + 0x54) = *(void*)(*arg1 + 0x54);
  lVar1 = *(int64_t *)(*arg1 + 0x10);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  FUN_01eb15c0();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if (*(int64_t *)(*arg1 + 0x28) == 0) goto LAB_01d46d1d;
  FUN_01d38ce0();
  lVar1 = puVar5[5];
  lVar6 = lVar1;
  if (lVar1 != local_40) {
    lVar6 = local_40;
    if (local_38 == '\0') {
      if (local_40 == 0) {
        lVar6 = 0;
        goto LAB_01d46ccf;
      }
      FUN_00d50b00();
      lVar1 = puVar5[5];
      puVar5[5] = local_40;
    }
    else {
      local_38 = '\0';
LAB_01d46ccf:
      puVar5[5] = lVar6;
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
      lVar6 = local_40;
    }
  }
  if ((local_38 != '\0') && (lVar6 != 0)) {
    FUN_00d50b20();
  }
LAB_01d46d1d:
  *this_ptr = puVar5;
  *(void*)(this_ptr + 1) = 1;
  return;
}

