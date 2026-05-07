// Function: FUN_008cb37c
// Address: 008cb37c
// Size: 724 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008cb37c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x24;
  lVar8 = this_ptr + 0x20;
  lVar12 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,uVar9,uVar10,uVar11,lVar12);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar9 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 3) {
      if (local_36 == 1) {
        if (local_44 == 0xf) {
          *(void*)(this_ptr + 0x10) = *(void*)(this_ptr + 8);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar6 = (uint64_t)local_34;
          uVar5 = *(int64_t *)(this_ptr + 0x10) - *(int64_t *)(this_ptr + 8);
          if (uVar5 < uVar6) {
            FUN_0088d550();
          }
          else if (uVar6 < uVar5) {
            *(uint64_t *)(this_ptr + 0x10) = *(int64_t *)(this_ptr + 8) + uVar6;
          }
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar5 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x128))();
              iVar1 = iVar1 + iVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x30) = 1;
          goto LAB_008cb5a9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 2) {
        if (local_44 == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x31) = 1;
          goto LAB_008cb5a9;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008cb54b:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008cb5a3:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 3) {
      if (local_44 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008cb5a3;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x32) = 1;
    }
    else if (local_36 == 0xc45) {
      if (local_44 != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008cb5a3;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x33) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008cb54b;
      if (local_44 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008cb5a3;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x34) = 1;
    }
LAB_008cb5a9:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

