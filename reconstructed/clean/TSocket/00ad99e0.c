// Function: FUN_00ad99e0
// Address: 00ad99e0
// Size: 900 bytes
// Class: TSocket

int FUN_00ad99e0(uint64_t param_1,string *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  string *this;
  uint *puVar6;
  int unaff_ESI;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint local_5c;
  byte local_58;
  undefined5 uStack_57;
  uint16_t uStack_52;
  uint8_t uStack_50;
  undefined5 uStack_4f;
  uint8_t uStack_4a;
  uint8_t uStack_49;
  uint64_t local_48;
  uint local_34;
  
  this = (string *)(uint64_t)*(uint *)(this_ptr + 4);
  uVar1 = (int)this_ptr[3] + 1;
  *(uint *)(this_ptr + 3) = uVar1;
  if (*(uint *)(this_ptr + 4) < uVar1) {
    puVar5 = (void*)___cxa_allocate_exception();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &g_02517250;
    *(void*)(puVar5 + 4) = 6;
                        ___cxa_throw(&g_02517250,FUN_0088de20);
  }
  if (0xd < unaff_ESI - 2U) {
switchD_00ad9a21_caseD_5:
    puVar5 = (void*)___cxa_allocate_exception();
    local_58 = 0x1a;
    uStack_57 = 0x6c61766e69;
    uStack_52 = 0x6469;
    uStack_50 = 0x20;
    uStack_4f = 0x6570795454;
    uStack_4a = 0;
    *puVar5 = &g_02517278;
    uVar7 = std::string::string(this,param_2);
    *puVar5 = &g_02517250;
    *(void*)(puVar5 + 4) = 1;
                        ___cxa_throw(uVar7,FUN_0088de20);
  }
  this = (string *)
         ((int64_t)&switchD_00ad9a21::switchdataD_00ad9ddc +
         (int64_t)(int)(&switchD_00ad9a21::switchdataD_00ad9ddc)[unaff_ESI - 2U]);
  switch(unaff_ESI) {
  case 2:
    iVar3 = (**(code **)(*this_ptr + 0x118))();
    break;
  case 3:
    local_58 = 0;
    iVar3 = (**(code **)(*this_ptr + 0x128))();
    break;
  case 4:
    iVar3 = (**(code **)(*this_ptr + 0x148))();
    break;
  default:
    goto switchD_00ad9a21_caseD_5;
  case 6:
    iVar3 = (**(code **)(*this_ptr + 0x130))();
    break;
  case 8:
    iVar3 = (**(code **)(*this_ptr + 0x138))();
    break;
  case 10:
    iVar3 = (**(code **)(*this_ptr + 0x140))();
    break;
  case 0xb:
    local_58 = 0;
    uStack_57 = 0;
    uStack_52 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    local_48 = 0;
    iVar3 = (**(code **)(*this_ptr + 0x158))();
    if ((local_58 & 1) != 0) {
      operator_delete(this);
    }
    break;
  case 0xc:
    local_58 = 0;
    uStack_57 = 0;
    uStack_52 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    local_48 = 0;
    iVar3 = (**(code **)(*this_ptr + 200))();
    while( true ) {
      puVar6 = &local_5c;
      iVar2 = (**(code **)(*this_ptr + 0xd8))(&local_5c,&local_34);
      iVar2 = iVar2 + iVar3;
      if (local_34 == 0) break;
      iVar4 = FUN_00ad99e0();
      iVar3 = (**(code **)(*this_ptr + 0xe0))();
      iVar3 = iVar4 + iVar2 + iVar3;
    }
    iVar3 = (**(code **)(*this_ptr + 0xd0))();
    if ((local_58 & 1) != 0) {
      operator_delete(puVar6);
    }
    goto LAB_00ad9c91;
  case 0xd:
    iVar2 = (**(code **)(*this_ptr + 0xe8))(&local_5c,&local_34);
    if (local_5c != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad99e0();
        iVar4 = FUN_00ad99e0();
        iVar2 = iVar2 + iVar3 + iVar4;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_5c);
    }
    iVar3 = (**(code **)(*this_ptr + 0xf0))();
LAB_00ad9c91:
    iVar3 = iVar3 + iVar2;
    break;
  case 0xe:
    iVar2 = (**(code **)(*this_ptr + 0x108))(this,&local_34);
    if (local_34 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad99e0();
        iVar2 = iVar2 + iVar3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_34);
    }
    iVar3 = (**(code **)(*this_ptr + 0x110))();
    goto LAB_00ad9bd2;
  case 0xf:
    iVar2 = (**(code **)(*this_ptr + 0xf8))(this,&local_34);
    if (local_34 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad99e0();
        iVar2 = iVar2 + iVar3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_34);
    }
    iVar3 = (**(code **)(*this_ptr + 0x100))();
LAB_00ad9bd2:
    iVar3 = iVar3 + iVar2;
  }
  *(int *)(this_ptr + 3) = (int)this_ptr[3] + -1;
  return iVar3;
}

