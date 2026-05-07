// Function: FUN_008db56c
// Address: 008db56c
// Size: 1102 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008db56c(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  int64_t lVar14;
  int local_44;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar14 = this_ptr + 0x118;
  lVar10 = this_ptr + 0xd8;
  lVar7 = this_ptr + 0x40;
  lVar8 = this_ptr + 0x28;
  lVar9 = this_ptr + 0x10;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,
                       uVar13,lVar14);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    if (iVar1 < 0xb) {
      if (iVar1 == 1) {
        if (local_44 != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 8) = local_34;
        *(void*)(this_ptr + 0x130) = 1;
      }
      else {
        if (iVar1 != 2) goto switchD_008db64d_caseD_d;
        if (local_44 != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(uint *)(this_ptr + 0xc) = local_34;
        *(void*)(this_ptr + 0x131) = 1;
      }
    }
    else {
      switch(iVar1) {
      case 0xb:
        if (local_44 != 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x132) = 1;
        break;
      case 0xc:
        if (local_44 != 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x133) = 1;
        break;
      case 0xd:
      case 0xe:
      case 0xf:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
switchD_008db64d_caseD_d:
        iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008db90b:
        iVar3 = iVar3 + iVar2;
        break;
      case 0x15:
        if (local_44 != 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x134) = 1;
        break;
      case 0x16:
        if (local_44 != 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x135) = 1;
        break;
      case 0x17:
        if (local_44 != 0xb) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x136) = 1;
        break;
      case 0x18:
        if (local_44 != 0xc) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008db90b;
        }
        iVar3 = FUN_008da830();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x137) = 1;
        break;
      default:
        if (iVar1 == 0x1f) {
          if (local_44 != 0xc) {
            iVar3 = (**(code **)(*arg1 + 0x160))();
            goto LAB_008db90b;
          }
          iVar3 = FUN_008d974a();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x138) = 1;
        }
        else {
          if (iVar1 != 0x20) goto switchD_008db64d_caseD_d;
          if (local_44 != 0xf) {
            iVar3 = (**(code **)(*arg1 + 0x160))();
            goto LAB_008db90b;
          }
          *(void*)(this_ptr + 0x120) = *(void*)(this_ptr + 0x118);
          iVar1 = (**(code **)(*arg1 + 0xf8))(0x15,&local_34);
          uVar6 = (uint64_t)local_34;
          uVar5 = *(int64_t *)(this_ptr + 0x120) - *(int64_t *)(this_ptr + 0x118);
          if (uVar5 < uVar6) {
            FUN_0088d550();
          }
          else if (uVar6 < uVar5) {
            *(uint64_t *)(this_ptr + 0x120) = *(int64_t *)(this_ptr + 0x118) + uVar6;
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
          *(void*)(this_ptr + 0x139) = 1;
        }
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

