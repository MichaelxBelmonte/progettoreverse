// Function: FUN_00918efc
// Address: 00918efc
// Size: 1126 bytes
// Class: GNData
// === GNData properties ===
//   double          _firstSpectrumTime
//   double          _spectraTimeDistance


int FUN_00918efc(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  uint32_t uVar7;
  uint32_t extraout_XMM0_Da_00;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int local_48;
  short local_42;
  uint local_34;
  
  FUN_0088d1d0();
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar8 = this_ptr + 0x20;
  lVar9 = this_ptr + 8;
  do {
    psVar4 = &local_42;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_48,param_3,param_4,lVar8,lVar9,uVar10,uVar11,uVar12);
    iVar2 = iVar2 + iVar1;
    if (local_48 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar10 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    if (local_42 < 0x1e) {
      if (local_42 == 10) {
        if (local_48 == 0xf) {
          *(void*)(this_ptr + 0x10) = 0;
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          FUN_009193a2(extraout_XMM0_Da_00,0);
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            uVar5 = 0;
            do {
              iVar2 = (**(code **)(*arg1 + 0x120))
                                (uVar5 & 0xffffffff,1L << ((byte)(uVar5 & 0xffffffff) & 0x3f));
              iVar1 = iVar1 + iVar2;
              uVar5 = uVar5 + 1;
            } while (uVar5 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0x80) = 1;
          goto LAB_009192c0;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else if (local_42 == 0x14) {
        if (local_48 == 0xf) {
          *(void*)(this_ptr + 0x28) = *(void*)(this_ptr + 0x20);
          iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
          uVar6 = (uint64_t)local_34;
          uVar5 = *(int64_t *)(this_ptr + 0x28) - *(int64_t *)(this_ptr + 0x20);
          if (uVar5 < uVar6) {
            FUN_0088d550();
          }
          else if (uVar6 < uVar5) {
            *(uint64_t *)(this_ptr + 0x28) = *(int64_t *)(this_ptr + 0x20) + uVar6;
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
          *(void*)(this_ptr + 0x81) = 1;
          goto LAB_009192c0;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
      else {
LAB_00919268:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
LAB_009192ba:
      iVar3 = iVar3 + iVar2;
    }
    else if (local_42 == 0x1e) {
      if (local_48 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_009192ba;
      }
      *(void*)(this_ptr + 0x40) = *(void*)(this_ptr + 0x38);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      FUN_008897f0();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x138))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x82) = 1;
    }
    else if (local_42 == 0x28) {
      if (local_48 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_009192ba;
      }
      *(void*)(this_ptr + 0x58) = *(void*)(this_ptr + 0x50);
      iVar1 = (**(code **)(*arg1 + 0xf8))(extraout_XMM0_Da,&local_34);
      FUN_0090f0c8();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x140))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x83) = 1;
    }
    else {
      if (local_42 != 0x32) goto LAB_00919268;
      if (local_48 != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_009192ba;
      }
      uVar7 = FUN_0091c2ea();
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar7,&local_34);
      FUN_0088ed80();
      iVar1 = iVar1 + iVar2;
      if (local_34 != 0) {
        uVar5 = 0;
        do {
          iVar2 = (**(code **)(*arg1 + 0x150))();
          iVar1 = iVar1 + iVar2;
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_34);
      }
      iVar3 = (**(code **)(*arg1 + 0x100))();
      iVar3 = iVar3 + iVar1;
      *(void*)(this_ptr + 0x84) = 1;
    }
LAB_009192c0:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

