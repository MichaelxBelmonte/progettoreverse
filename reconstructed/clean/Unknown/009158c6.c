// Function: FUN_009158c6
// Address: 009158c6
// Size: 975 bytes
// Class: Unknown

int FUN_009158c6(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  int64_t *arg1;
  int64_t this_ptr;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int local_3c;
  short local_36;
  uint32_t local_34;
  
  FUN_0088d1d0();
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar8 = this_ptr + 0x408;
  lVar9 = this_ptr + 0x402;
  lVar10 = this_ptr + 0x401;
  lVar11 = this_ptr + 0x400;
  lVar6 = this_ptr + 0x28;
  lVar7 = this_ptr + 0x10;
  do {
    psVar5 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar5,&local_3c,param_3,param_4,lVar6,lVar7,lVar8,lVar9,lVar10,lVar11,uVar12
                       ,uVar13,uVar14);
    if (local_3c == 0) {
      iVar3 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar12 & 1) != 0) {
        operator_delete(psVar5);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar3 + iVar2 + iVar1;
    }
    iVar3 = (int)local_36;
    switch(iVar3) {
    case 1:
      if (local_3c == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        *(void*)(this_ptr + 8) = local_34;
        *(void*)(this_ptr + 0x588) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 2:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x589) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 3:
      if (local_3c == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        *(void*)(this_ptr + 0x58a) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
switchD_009159ad_caseD_4:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_3c == 0xc) {
        iVar3 = FUN_00908a3a();
        *(void*)(this_ptr + 0x58b) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xb:
      if (local_3c == 0xc) {
        iVar3 = FUN_00904b02();
        *(void*)(this_ptr + 0x58c) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    case 0xc:
      if (local_3c == 0xc) {
        iVar3 = FUN_00904b02();
        *(void*)(this_ptr + 0x58d) = 1;
      }
      else {
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      break;
    default:
      switch(iVar3) {
      case 0x1e:
        if (local_3c == 2) {
          iVar3 = (**(code **)(*arg1 + 0x118))();
          *(void*)(this_ptr + 0x58f) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
        break;
      case 0x1f:
        if (local_3c == 2) {
          iVar3 = (**(code **)(*arg1 + 0x118))();
          *(void*)(this_ptr + 0x590) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
        break;
      case 0x20:
        if (local_3c == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          *(void*)(this_ptr + 0x404) = local_34;
          *(void*)(this_ptr + 0x591) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
        break;
      case 0x21:
        if (local_3c == 0xc) {
          iVar3 = FUN_00913b78();
          *(void*)(this_ptr + 0x592) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
        break;
      default:
        if (iVar3 != 0x14) goto switchD_009159ad_caseD_4;
        if (local_3c == 2) {
          iVar3 = (**(code **)(*arg1 + 0x118))();
          *(void*)(this_ptr + 0x58e) = 1;
        }
        else {
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
      }
    }
    iVar4 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar3 + iVar2 + iVar1 + iVar4;
  } while( true );
}

