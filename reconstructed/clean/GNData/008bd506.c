// Function: FUN_008bd506
// Address: 008bd506
// Size: 1066 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


int FUN_008bd506(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  uint64_t uVar7;
  int64_t this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
  int local_4c [2];
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  iVar1 = (**(code **)(*arg1 + 200))();
  do {
    iVar2 = (**(code **)(*arg1 + 0xd8))(&local_42,local_4c);
    iVar2 = iVar2 + iVar1;
    if (local_4c[0] == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_42 < 3) {
      if (local_42 == 1) {
        if (local_4c[0] == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 8);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x10); lVar5 != lVar6; lVar5 = lVar5 + -0xa0) {
            uVar8 = (***(void**)(lVar5 + -0xa0))();
          }
          *(int64_t *)(this_ptr + 0x10) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_009b46c0();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar4 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 8) + lVar6) + 0x10))();
              iVar1 = iVar1 + iVar2;
              uVar4 = uVar4 + 1;
              lVar6 = lVar6 + 0xa0;
            } while (uVar4 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xb8) = 1;
          goto LAB_008bd820;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_42 == 2) {
        if (local_4c[0] == 0xc) {
          iVar3 = FUN_008feee4();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0xb9) = 1;
          goto LAB_008bd820;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_008bd7c2:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_008bd81a:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_42 == 3) {
      if (local_4c[0] != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008bd81a;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xba) = 1;
    }
    else if (local_42 == 0xc45) {
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008bd81a;
      }
      *(void*)(this_ptr + 0x90) = *(void*)(this_ptr + 0x88);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar7 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0x90) - *(int64_t *)(this_ptr + 0x88);
      if (uVar4 < uVar7) {
        FUN_0088d550();
      }
      else if (uVar7 < uVar4) {
        *(uint64_t *)(this_ptr + 0x90) = *(int64_t *)(this_ptr + 0x88) + uVar7;
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
      *(void*)(this_ptr + 0xbb) = 1;
    }
    else {
      if (local_42 != 0xc46) goto LAB_008bd7c2;
      if (local_4c[0] != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008bd81a;
      }
      *(void*)(this_ptr + 0xa8) = *(void*)(this_ptr + 0xa0);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      uVar7 = (uint64_t)local_34;
      uVar4 = *(int64_t *)(this_ptr + 0xa8) - *(int64_t *)(this_ptr + 0xa0);
      if (uVar4 < uVar7) {
        FUN_0088d550();
      }
      else if (uVar7 < uVar4) {
        *(uint64_t *)(this_ptr + 0xa8) = *(int64_t *)(this_ptr + 0xa0) + uVar7;
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
      *(void*)(this_ptr + 0xbc) = 1;
    }
LAB_008bd820:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

