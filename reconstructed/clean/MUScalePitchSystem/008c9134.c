// Function: FUN_008c9134
// Address: 008c9134
// Size: 833 bytes
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


int FUN_008c9134(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int local_48 [2];
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_36,local_48);
    iVar2 = iVar2 + iVar1;
    if (local_48[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_36 < 0xb) {
      if (local_36 == 1) {
        if (local_48[0] == 8) {
          iVar3 = (**(code **)(*arg1 + 0x138))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0x5c) = 1;
          goto LAB_008c9379;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_36 == 10) {
        if (local_48[0] == 0xf) {
          *(void*)(this_ptr + 0x18) = *(void*)(this_ptr + 0x10);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar5 = (uint64_t)local_34;
          uVar4 = *(int64_t *)(this_ptr + 0x18) - *(int64_t *)(this_ptr + 0x10);
          if (uVar4 < uVar5) {
            FUN_0088d550();
          }
          else if (uVar5 < uVar4) {
            *(uint64_t *)(this_ptr + 0x18) = *(int64_t *)(this_ptr + 0x10) + uVar5;
          }
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x128))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x5d) = 1;
          goto LAB_008c9379;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008c9321:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008c9373:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_36 == 0xb) {
      if (local_48[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c9373;
      }
      *(void*)(this_ptr + 0x30) = *(void*)(this_ptr + 0x28);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x30) - *(int64_t *)(this_ptr + 0x28);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x30) = *(int64_t *)(this_ptr + 0x28) + uVar5;
      }
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar4 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x128))();
          iVar1 = iVar1 + iVar2;
          uVar4 = uVar4 + 1;
        } while (uVar4 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x5e) = 1;
    }
    else if (local_36 == 0x14) {
      if (local_48[0] != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c9373;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x5f) = 1;
    }
    else {
      if (local_36 != 10000) goto LAB_008c9321;
      if (local_48[0] != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c9373;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x60) = 1;
    }
LAB_008c9379:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

