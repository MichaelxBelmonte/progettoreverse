// Function: FUN_01f316e0
// Address: 01f316e0
// Size: 1142 bytes
// Class: GNOverloudTapedesk

uint32_t FUN_01f316e0(int64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  void*puVar2;
  int iVar3;
  void*puVar4;
  int64_t lVar5;
  void*puVar6;
  uint32_t uVar7;
  int64_t *arg1;
  int64_t *this_ptr;
  int64_t local_48;
  char local_40;
  int64_t *local_38;
  
  if (*arg1 == 0) {
    (**(code **)(*this_ptr + 0x458))();
    lVar5 = *arg1;
    if (lVar5 == local_48) {
      if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_01f317bc;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_01f317b5;
      }
    }
    else {
      lVar1 = arg1[1];
      if (local_40 == '\0') {
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *arg1 = local_48;
        if (((char)lVar1 != '\0') && (lVar5 != 0)) {
          FUN_00d50b20();
        }
LAB_01f317b5:
        local_38 = arg1 + 1;
        *(void*)local_38 = 1;
LAB_01f317bc:
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_01f317d0;
      }
      *arg1 = local_48;
      if (((char)lVar1 != '\0') && (lVar5 != 0)) {
        FUN_00d50b20();
      }
    }
    local_38 = arg1 + 1;
    *(void*)local_38 = 1;
  }
LAB_01f317d0:
  *(int *)((int64_t)this_ptr + 0xdc) = *(int *)((int64_t)this_ptr + 0xdc) + 1;
  *(int *)(this_ptr + 0x1c) = (int)this_ptr[0x1c] + 1;
  _objc_alloc();
  puVar2 = PTR__objc_msgSend_024a9998;
  (*PTR__objc_msgSend_024a9998)();
  _objc_alloc();
  (*puVar2)();
  _objc_autorelease();
  (*puVar2)();
  FUN_00e1cfc0();
  (*PTR__objc_msgSend_024a9998)();
  FUN_00e1cfc0();
  (*PTR__objc_msgSend_024a9998)();
  puVar4 = (void*)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar4 = &g_025683c0;
  (*g_025683d8)();
  FUN_00c92170();
  FUN_00c92160();
  if ((*param_1 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(void*)(puVar4[2] + (int64_t)iVar3) = 0;
  }
  if ((*param_3 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(void*)(puVar4[2] + (int64_t)iVar3) = 1;
  }
  if ((*param_4 != 0) && (iVar3 = FUN_00d8c7a0(), iVar3 != 0)) {
    FUN_00e1cfc0();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    (*PTR__objc_msgSend_024a9998)();
    iVar3 = *(int *)(puVar4 + 3);
    FUN_00c8e340();
    *(void*)(puVar4[2] + (int64_t)iVar3) = 2;
  }
  lVar5 = (*PTR__objc_msgSend_024a9998)();
  if (lVar5 == 0x3ea) {
    puVar6 = (void*)(puVar4[2] + 8);
  }
  else if (lVar5 == 0x3e9) {
    puVar6 = (void*)(puVar4[2] + 4);
  }
  else {
    uVar7 = 0;
    if (lVar5 != 1000) goto LAB_01f31b1e;
    puVar6 = (void*)puVar4[2];
  }
  uVar7 = *puVar6;
LAB_01f31b1e:
  (*PTR__objc_release_024a99a0)();
  *(int *)((int64_t)this_ptr + 0xdc) = *(int *)((int64_t)this_ptr + 0xdc) + -1;
  *(int *)(this_ptr + 0x1c) = (int)this_ptr[0x1c] + -1;
  FUN_00d50b20();
  return uVar7;
}

