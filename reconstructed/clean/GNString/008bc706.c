// Function: FUN_008bc706
// Address: 008bc706
// Size: 802 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008bc706(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  uint64_t uVar6;
  int64_t this_ptr;
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
  lVar12 = this_ptr + 0x378;
  lVar7 = this_ptr + 0x20;
  lVar8 = this_ptr + 8;
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
    iVar1 = (int)local_36;
    switch(iVar1) {
    case 1:
      if (local_44 != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x390) = 1;
      goto LAB_008bc97f;
    case 2:
      if (local_44 == 0xc) {
        iVar3 = FUN_0088a05e();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x391) = 1;
        goto LAB_008bc97f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x392) = 1;
        goto LAB_008bc97f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x393) = 1;
        goto LAB_008bc97f;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      if (iVar1 == 0xc44) {
        if (local_44 == 0xc) {
          iVar3 = FUN_008f7b82();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x394) = 1;
          goto LAB_008bc97f;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (iVar1 == 0xc45) {
        if (local_44 == 0xf) {
          *(void*)(this_ptr + 0x380) = *(void*)(this_ptr + 0x378);
          iVar1 = (**(code **)(*arg1 + 0xf8))(0xc44,&local_34);
          uVar6 = (uint64_t)local_34;
          uVar5 = *(int64_t *)(this_ptr + 0x380) - *(int64_t *)(this_ptr + 0x378);
          if (uVar5 < uVar6) {
            FUN_0088d550();
          }
          else if (uVar6 < uVar5) {
            *(uint64_t *)(this_ptr + 0x380) = *(int64_t *)(this_ptr + 0x378) + uVar6;
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
          *(void*)(this_ptr + 0x395) = 1;
          goto LAB_008bc97f;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_008bc97f:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

