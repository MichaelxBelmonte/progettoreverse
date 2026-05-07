// Function: FUN_0094d540
// Address: 0094d540
// Size: 1320 bytes
// Class: GNString
// String references:
//   "invalid TType"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_0094d540(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  void*puVar3;
  char *pcVar4;
  uint uVar5;
  int unaff_ESI;
  int64_t this_ptr;
  uint uVar6;
  int iVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  uint local_58;
  uint64_t uVar9;
  uint local_38;
  
  FUN_0088d1d0();
  if (0xd < unaff_ESI - 2U) {
switchD_0094d575_caseD_3:
    puVar3 = (void*)___cxa_allocate_exception();
    FUN_0092e080();
    uVar8 = FUN_008d3e60();
    *puVar3 = &g_02517250;
    *(void*)(puVar3 + 4) = 1;
                        ___cxa_throw(uVar8,FUN_0088de20);
  }
  pcVar4 = (char *)((int64_t)&switchD_0094d575::switchdataD_0094daec +
                   (int64_t)(int)(&switchD_0094d575::switchdataD_0094daec)[unaff_ESI - 2U]);
  switch(unaff_ESI) {
  case 2:
    iVar7 = 1;
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,1);
    break;
  case 3:
    iVar7 = 1;
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,1);
    break;
  case 4:
    iVar7 = 8;
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,8);
    break;
  default:
    goto switchD_0094d575_caseD_3;
  case 6:
    iVar7 = 2;
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,2);
    break;
  case 8:
    iVar7 = 4;
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,4);
    break;
  case 10:
    iVar7 = 8;
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,8);
    break;
  case 0xb:
    uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,4,param_3,param_4,0);
    iVar7 = FUN_00927b40(uVar8,local_38 >> 0x18 | (local_38 & 0xff0000) >> 8 |
                               (local_38 & 0xff00) << 8 | local_38 << 0x18);
    iVar7 = iVar7 + 4;
    break;
  case 0xc:
    uVar9 = 0;
    uVar8 = std::string::assign(pcVar4);
    iVar7 = 0;
    while (uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))
                             (uVar8,1,param_3,param_4,uVar9), (char)local_38 != '\0') {
      (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(uVar8,2);
      iVar1 = FUN_0094d540();
      iVar7 = iVar7 + 3 + iVar1;
      uVar8 = extraout_XMM0_Da;
    }
    iVar7 = iVar7 + 1;
    break;
  case 0xd:
    uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,1);
    uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(uVar8,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(uVar8,4);
    uVar6 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
            local_58 << 0x18;
    if ((int)uVar6 < 0) {
      puVar3 = (void*)___cxa_allocate_exception();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &g_02517250;
      *(void*)(puVar3 + 4) = 2;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
    if ((*(int *)(this_ptr + 0x34) != 0) && (*(int *)(this_ptr + 0x34) < (int)uVar6)) {
      puVar3 = (void*)___cxa_allocate_exception();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &g_02517250;
      *(void*)(puVar3 + 4) = 3;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
    iVar7 = 6;
    if (local_58 != 0) {
      uVar5 = 0;
      do {
        iVar1 = FUN_0094d540();
        iVar2 = FUN_0094d540();
        iVar7 = iVar7 + iVar1 + iVar2;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    break;
  case 0xe:
    uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(uVar8,4);
    uVar6 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
            local_58 << 0x18;
    if ((int)uVar6 < 0) {
      puVar3 = (void*)___cxa_allocate_exception();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &g_02517250;
      *(void*)(puVar3 + 4) = 2;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
    if ((*(int *)(this_ptr + 0x34) != 0) && (*(int *)(this_ptr + 0x34) < (int)uVar6)) {
      puVar3 = (void*)___cxa_allocate_exception();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &g_02517250;
      *(void*)(puVar3 + 4) = 3;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
    if (local_58 != 0) {
      iVar7 = 5;
      uVar5 = 0;
      do {
        iVar1 = FUN_0094d540();
        iVar7 = iVar7 + iVar1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
      break;
    }
    goto LAB_0094d87b;
  case 0xf:
    uVar8 = (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(pcVar4,1);
    (**(code **)(**(int64_t **)(this_ptr + 0x28) + 0x38))(uVar8,4);
    uVar6 = local_58 >> 0x18 | (local_58 & 0xff0000) >> 8 | (local_58 & 0xff00) << 8 |
            local_58 << 0x18;
    if ((int)uVar6 < 0) {
      puVar3 = (void*)___cxa_allocate_exception();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &g_02517250;
      *(void*)(puVar3 + 4) = 2;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
    if ((*(int *)(this_ptr + 0x34) != 0) && (*(int *)(this_ptr + 0x34) < (int)uVar6)) {
      puVar3 = (void*)___cxa_allocate_exception();
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *puVar3 = &g_02517250;
      *(void*)(puVar3 + 4) = 3;
                          ___cxa_throw(&g_02517250,FUN_0088de20);
    }
    if (local_58 != 0) {
      iVar7 = 5;
      uVar5 = 0;
      do {
        iVar1 = FUN_0094d540();
        iVar7 = iVar7 + iVar1;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
      break;
    }
LAB_0094d87b:
    iVar7 = 5;
  }
  *(int *)(this_ptr + 0x18) = *(int *)(this_ptr + 0x18) + -1;
  return iVar7;
}

