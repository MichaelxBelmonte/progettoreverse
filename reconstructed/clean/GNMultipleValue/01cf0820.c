// Function: FUN_01cf0820
// Address: 01cf0820
// Size: 913 bytes
// Class: GNMultipleValue

void FUN_01cf0820(uint64_t param_1,uint32_t param_2)

{
  byte bVar1;
  int64_t lVar2;
  int64_t lVar3;
  char cVar4;
  int iVar5;
  bool bVar6;
  int64_t *arg1;
  int64_t *this_ptr;
  uint32_t uVar7;
  uint32_t uVar8;
  int64_t local_48;
  char local_40;
  
  iVar5 = FUN_01d3a5a0();
  if ((iVar5 == 1) && (iVar5 = FUN_01d3b630(), iVar5 == 1)) {
    cVar4 = (**(code **)(*this_ptr + 0x9a0))();
    if (cVar4 != '\0') {
      cVar4 = (**(code **)(*this_ptr + 0x878))();
      if ((cVar4 != '\0') && (cVar4 = FUN_01e420b0(), cVar4 == '\0')) {
        FUN_01e42250();
      }
      FUN_00d50b00();
      if (*(int *)((int64_t)this_ptr + 500) == 2) {
        *(void*)(this_ptr + 0x31) = 1;
        *(void*)(this_ptr + 0x29) = 1;
        FUN_01d11e80();
      }
      bVar1 = 0;
      do {
        FUN_01d3abf0();
        uVar7 = FUN_01e466c0();
        uVar8 = FUN_01e3f820();
        cVar4 = FUN_00d05410(uVar7,uVar8,param_2);
        bVar6 = true;
        if (cVar4 == '\0') {
          bVar6 = *(int *)((int64_t)this_ptr + 500) == 2;
        }
        *(bool *)(this_ptr + 0x31) = bVar6;
        param_2 = uVar8;
        if ((bool)(bVar1 & 1) != bVar6) {
          if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
            *(uint *)(this_ptr + 0x29) = (uint)((int)this_ptr[0x29] < 1);
          }
          (**(code **)(*this_ptr + 0x620))();
          bVar1 = *(byte *)(this_ptr + 0x31);
          param_2 = uVar8;
        }
        (**(code **)(*this_ptr + 0x658))();
        lVar2 = *arg1;
        if (lVar2 == local_48) {
          if (((char)arg1[1] != '\0') || (local_48 == 0)) goto LAB_01cf09f1;
          if (local_40 == '\0') {
            FUN_00d50b00();
            goto LAB_01cf09ec;
          }
LAB_01cf09b2:
          *(void*)(arg1 + 1) = 1;
        }
        else {
          lVar3 = arg1[1];
          if (local_40 != '\0') {
            *arg1 = local_48;
            if (((char)lVar3 != '\0') && (lVar2 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_01cf09b2;
          }
          if (local_48 != 0) {
            FUN_00d50b00();
          }
          *arg1 = local_48;
          if (((char)lVar3 != '\0') && (lVar2 != 0)) {
            FUN_00d50b20();
          }
LAB_01cf09ec:
          *(void*)(arg1 + 1) = 1;
LAB_01cf09f1:
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
      } while ((*arg1 != 0) && (iVar5 = FUN_01d3a5a0(), iVar5 != 6));
      if ((char)this_ptr[0x31] != '\0') {
        if (*(int *)((int64_t)this_ptr + 500) == 2) {
          *(void*)(this_ptr + 0x29) = 0;
        }
        FUN_01d11e80();
      }
      *(void*)(this_ptr + 0x31) = 0;
      (**(code **)(*this_ptr + 0x620))();
      FUN_00d50b20();
    }
  }
  else {
    iVar5 = FUN_01d3a5a0();
    if ((iVar5 == 2) && (cVar4 = (**(code **)(*this_ptr + 0xa98))(), cVar4 != '\0')) {
      cVar4 = (**(code **)(*this_ptr + 0x9a0))();
      if (cVar4 == '\0') {
        return;
      }
      (**(code **)(*this_ptr + 0xa58))();
      if (*(char *)((int64_t)this_ptr + 0x16b) != '\0') {
        (**(code **)(*this_ptr + 0x918))();
      }
    }
    else {
      iVar5 = FUN_01d3a5a0();
      if ((iVar5 == 9) && (cVar4 = (**(code **)(*this_ptr + 0xa98))(), cVar4 != '\0')) {
        cVar4 = (**(code **)(*this_ptr + 0x9a0))();
        if (cVar4 == '\0') {
          return;
        }
        cVar4 = (**(code **)(*this_ptr + 0xa78))();
        if (cVar4 == '\0') {
          return;
        }
        (**(code **)(*this_ptr + 0xa58))();
        FUN_01d11e80();
        return;
      }
    }
    FUN_01d122b0();
  }
  return;
}

