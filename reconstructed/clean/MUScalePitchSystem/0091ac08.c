// Function: FUN_0091ac08
// Address: 0091ac08
// Size: 1027 bytes
// Class: MUScalePitchSystem
// === MUScalePitchSystem properties ===
//   bool            _tuningIsSuggestedRelevant
//   bool            _modeIsSuggestedRelevant
//   bool            _tuningPitchAnchorIsSuggestedRelevant
//   bool            _modeFundamentalOffsetIsSuggestedRelevant
//   bool            _stretchingIsSuggestedRelevant
//   double          _startPulse
//   double          _startTime
//   double          _width
//   double          _scope


int FUN_0091ac08(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x14;
  lVar8 = this_ptr + 0x10;
  lVar9 = this_ptr + 0xc;
  lVar10 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,local_48,param_3,param_4,lVar7,lVar8,lVar9,lVar10,uVar11,uVar12,uVar13
                      );
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar11 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_48[0] != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x58) = 1;
      goto LAB_0091af17;
    case 2:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x59) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x5a) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_48[0] == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x5b) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x20) = *(void*)(this_ptr + 0x18);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_0091acdd::switchdataD_0091b03c,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x20) - *(int64_t *)(this_ptr + 0x18);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x20) = *(int64_t *)(this_ptr + 0x18) + uVar6;
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
        *(void*)(this_ptr + 0x5c) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 6:
      if (local_48[0] == 0xf) {
        *(void*)(this_ptr + 0x38) = *(void*)(this_ptr + 0x30);
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_0091acdd::switchdataD_0091b03c,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(this_ptr + 0x38) - *(int64_t *)(this_ptr + 0x30);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(this_ptr + 0x38) = *(int64_t *)(this_ptr + 0x30) + uVar6;
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
        *(void*)(this_ptr + 0x5d) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x5e) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_48[0] == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x5f) = 1;
        goto LAB_0091af17;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_0091af17:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

