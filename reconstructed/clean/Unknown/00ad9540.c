// Function: FUN_00ad9540
// Address: 00ad9540
// Size: 865 bytes
// Class: Unknown

int FUN_00ad9540(uint64_t param_1,string *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  void*puVar5;
  string *this;
  int unaff_ESI;
  int64_t this_ptr;
  uint32_t uVar6;
  uint local_64;
  uint local_60;
  byte local_58;
  uint8_t uStack_57;
  uint16_t uStack_56;
  uint16_t uStack_54;
  uint16_t uStack_52;
  uint8_t uStack_50;
  undefined5 uStack_4f;
  uint8_t uStack_4a;
  uint8_t uStack_49;
  uint64_t local_48;
  uint local_34;
  
  this = (string *)(uint64_t)*(uint *)(this_ptr + 0x20);
  uVar1 = *(int *)(this_ptr + 0x18) + 1;
  *(uint *)(this_ptr + 0x18) = uVar1;
  if (*(uint *)(this_ptr + 0x20) < uVar1) {
    puVar5 = (void*)___cxa_allocate_exception();
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *puVar5 = &g_02517250;
    *(void*)(puVar5 + 4) = 6;
                        ___cxa_throw(&g_02517250,FUN_0088de20);
  }
  if (0xd < unaff_ESI - 2U) {
switchD_00ad9581_caseD_5:
    puVar5 = (void*)___cxa_allocate_exception();
    local_58 = 0x1a;
    uStack_57 = 0x69;
    uStack_56 = 0x766e;
    uStack_54 = 0x6c61;
    uStack_52 = 0x6469;
    uStack_50 = 0x20;
    uStack_4f = 0x6570795454;
    uStack_4a = 0;
    *puVar5 = &g_02517278;
    uVar6 = std::string::string(this,param_2);
    *puVar5 = &g_02517250;
    *(void*)(puVar5 + 4) = 1;
                        ___cxa_throw(uVar6,FUN_0088de20);
  }
  this = (string *)
         ((int64_t)&switchD_00ad9581::switchdataD_00ad991c +
         (int64_t)(int)(&switchD_00ad9581::switchdataD_00ad991c)[unaff_ESI - 2U]);
  switch(unaff_ESI) {
  case 2:
    iVar2 = FUN_00ad64b0();
    break;
  case 3:
    local_58 = 0;
    uStack_57 = 0;
    iVar2 = FUN_00ad6940();
    break;
  case 4:
    iVar2 = FUN_00ad4740();
    break;
  default:
    goto switchD_00ad9581_caseD_5;
  case 6:
    iVar2 = FUN_00ad6940();
    break;
  case 8:
    iVar2 = FUN_00ad6dd0();
    break;
  case 10:
    iVar2 = FUN_00ad5540();
    break;
  case 0xb:
    local_58 = 0;
    uStack_57 = 0;
    uStack_56 = 0;
    uStack_54 = 0;
    uStack_52 = 0;
    uStack_50 = 0;
    uStack_4f = 0;
    uStack_4a = 0;
    uStack_49 = 0;
    local_48 = 0;
    iVar2 = FUN_00ad4590();
    if ((local_58 & 1) != 0) {
      operator_delete(this);
    }
    break;
  case 0xc:
    iVar3 = FUN_00ad50d0();
    while( true ) {
      iVar2 = FUN_00ad59d0(&local_34,&local_58);
      iVar2 = iVar2 + iVar3;
      if (CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)) == 0) break;
      iVar3 = FUN_00ad9540();
      FUN_00ad3660();
      FUN_00ad1df0();
      iVar3 = iVar2 + 1 + iVar3;
    }
    FUN_00ad3660();
    goto LAB_00ad97c7;
  case 0xd:
    iVar2 = FUN_00ad6170(&local_64,&local_34);
    local_60 = local_64;
    if (local_64 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad9540();
        iVar4 = FUN_00ad9540();
        iVar2 = iVar2 + iVar3 + iVar4;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_60);
    }
    FUN_00ad3660();
    FUN_00ad1df0();
    FUN_00ad3660();
    FUN_00ad1df0();
    iVar2 = iVar2 + 2;
    break;
  case 0xe:
    iVar2 = FUN_00ad63b0(this,&local_34);
    if (local_34 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad9540();
        iVar2 = iVar2 + iVar3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_34);
    }
    FUN_00ad3660();
    goto LAB_00ad97c7;
  case 0xf:
    iVar2 = FUN_00ad62b0(this,&local_34);
    if (local_34 != 0) {
      uVar1 = 0;
      do {
        iVar3 = FUN_00ad9540();
        iVar2 = iVar2 + iVar3;
        uVar1 = uVar1 + 1;
      } while (uVar1 < local_34);
    }
    FUN_00ad3660();
LAB_00ad97c7:
    FUN_00ad1df0();
    iVar2 = iVar2 + 1;
  }
  *(int *)(this_ptr + 0x18) = *(int *)(this_ptr + 0x18) + -1;
  return iVar2;
}

