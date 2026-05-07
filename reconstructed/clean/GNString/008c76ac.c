// Function: FUN_008c76ac
// Address: 008c76ac
// Size: 1642 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008c76ac(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *arg1;
  uint64_t uVar5;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(local_46,&local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_46[0] < 0x1e) {
      if (local_46[0] < 0xb) {
        if (local_46[0] == 1) {
          if (local_4c == 0xb) {
            iVar3 = (**(code **)(*arg1 + 0x150))();
            iVar3 = iVar3 + iVar2;
            *(void*)(this_ptr + 0xa4) = 1;
            goto LAB_008c7af4;
          }
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
        else if (local_46[0] == 10) {
          if (local_4c == 0xf) {
            *(void*)(this_ptr + 0x28) = *(void*)(this_ptr + 0x20);
            iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
            uVar5 = (uint64_t)local_34;
            uVar4 = *(int64_t *)(this_ptr + 0x28) - *(int64_t *)(this_ptr + 0x20);
            if (uVar4 < uVar5) {
              FUN_0088d550();
            }
            else if (uVar5 < uVar4) {
              *(uint64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x20) + uVar5;
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
            *(void*)(this_ptr + 0xa5) = 1;
            goto LAB_008c7af4;
          }
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
        else {
LAB_008c7a64:
          iVar3 = (**(code **)(*arg1 + 0x160))();
        }
LAB_008c7aee:
        iVar3 = iVar3 + iVar2;
      }
      else if (local_46[0] == 0xb) {
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c7aee;
        }
        *(void*)(this_ptr + 0x40) = *(void*)(this_ptr + 0x38);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar5 = (uint64_t)local_34;
        uVar4 = *(int64_t *)(this_ptr + 0x40) - *(int64_t *)(this_ptr + 0x38);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(uint64_t *)(this_ptr + 0x40) = *(int64_t *)(this_ptr + 0x38) + uVar5;
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
        *(void*)(this_ptr + 0xa6) = 1;
      }
      else {
        if (local_46[0] != 0x14) goto LAB_008c7a64;
        if (local_4c != 0xf) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c7aee;
        }
        *(void*)(this_ptr + 0x58) = *(void*)(this_ptr + 0x50);
        iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
        uVar5 = (uint64_t)local_34;
        uVar4 = *(int64_t *)(this_ptr + 0x58) - *(int64_t *)(this_ptr + 0x50);
        if (uVar4 < uVar5) {
          FUN_0088d550();
        }
        else if (uVar5 < uVar4) {
          *(uint64_t *)(this_ptr + 0x58) = *(int64_t *)(this_ptr + 0x50) + uVar5;
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
        *(void*)(this_ptr + 0xa7) = 1;
      }
    }
    else if (local_46[0] < 0x29) {
      if (local_46[0] == 0x1e) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c7aee;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xa8) = 1;
      }
      else {
        if (local_46[0] != 0x28) goto LAB_008c7a64;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c7aee;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xa9) = 1;
      }
    }
    else if (local_46[0] == 0x29) {
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c7aee;
      }
      *(void*)(this_ptr + 0x78) = *(void*)(this_ptr + 0x70);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x78) - *(int64_t *)(this_ptr + 0x70);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x78) = *(int64_t *)(this_ptr + 0x70) + uVar5;
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
      *(void*)(this_ptr + 0xaa) = 1;
    }
    else if (local_46[0] == 0x2a) {
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c7aee;
      }
      *(void*)(this_ptr + 0x90) = *(void*)(this_ptr + 0x88);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar5 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x90) - *(int64_t *)(this_ptr + 0x88);
      if (uVar4 < uVar5) {
        FUN_0088d550();
      }
      else if (uVar5 < uVar4) {
        *(uint64_t *)(this_ptr + 0x90) = *(int64_t *)(this_ptr + 0x88) + uVar5;
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
      *(void*)(this_ptr + 0xab) = 1;
    }
    else {
      if (local_46[0] != 10000) goto LAB_008c7a64;
      if (local_4c != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c7aee;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xac) = 1;
    }
LAB_008c7af4:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

