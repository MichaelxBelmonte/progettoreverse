// Function: FUN_008c14e6
// Address: 008c14e6
// Size: 2191 bytes
// Class: MUScaleBrowserItem

int FUN_008c14e6(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  uint64_t uVar5;
  int64_t *arg1;
  int64_t this_ptr;
  uint32_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t lVar13;
  int64_t lVar14;
  int64_t lVar15;
  int64_t lVar16;
  int64_t lVar17;
  int64_t lVar18;
  int64_t lVar19;
  int64_t lVar20;
  int64_t lVar21;
  int64_t lVar22;
  uint64_t uVar23;
  uint64_t uVar24;
  uint64_t uVar25;
  int local_4c;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar21 = this_ptr + 0xf8;
  lVar7 = this_ptr + 0xf3;
  lVar8 = this_ptr + 0xf2;
  lVar9 = this_ptr + 0xf1;
  lVar10 = this_ptr + 0xf0;
  lVar11 = this_ptr + 0xa8;
  lVar12 = this_ptr + 0x90;
  lVar13 = this_ptr + 0x78;
  lVar14 = this_ptr + 0x40;
  lVar15 = this_ptr + 0x38;
  lVar16 = this_ptr + 0x30;
  lVar17 = this_ptr + 0x28;
  lVar18 = this_ptr + 0x20;
  lVar19 = this_ptr + 0x18;
  lVar20 = this_ptr + 0x10;
  lVar22 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,uVar23,
                       uVar24,uVar25);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar23 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    iVar1 = (int)local_36;
    switch(iVar1 + -10) {
    case 0:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xfd) = 1;
      break;
    case 1:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xfe) = 1;
      break;
    case 2:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xff) = 1;
      break;
    case 3:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x100) = 1;
      break;
    case 4:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x101) = 1;
      break;
    case 5:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x102) = 1;
      break;
    case 6:
      if (local_4c != 10) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x140))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x103) = 1;
      break;
    case 7:
    case 8:
    case 9:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
switchD_008c1679_caseD_7:
      iVar3 = (**(code **)(*arg1 + 0x160))();
LAB_008c1d21:
      iVar3 = iVar3 + iVar2;
      break;
    case 10:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar6,&local_34);
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
      *(void*)(this_ptr + 0x104) = 1;
      break;
    case 0xb:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      uVar6 = FUN_008cc280();
      iVar1 = (**(code **)(*arg1 + 0xf8))(uVar6,&local_34);
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
      *(void*)(this_ptr + 0x105) = 1;
      break;
    case 0x14:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x106) = 1;
      break;
    case 0x15:
      if (local_4c != 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x150))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x107) = 1;
      break;
    case 0x16:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = FUN_008fea92();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x108) = 1;
      break;
    case 0x1e:
      if (local_4c != 0xf) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      *(void*)(this_ptr + 0xe0) = *(void*)(this_ptr + 0xd8);
      iVar1 = (**(code **)(*arg1 + 0xf8))(iVar1 + -10,&local_34);
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
      *(void*)(this_ptr + 0x109) = 1;
      break;
    case 0x28:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10a) = 1;
      break;
    case 0x29:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10b) = 1;
      break;
    case 0x2a:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10c) = 1;
      break;
    case 0x2b:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10d) = 1;
      break;
    case 0x2c:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10e) = 1;
      break;
    case 0x2d:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x10f) = 1;
      break;
    case 0x2e:
      if (local_4c != 2) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        goto LAB_008c1d21;
      }
      iVar3 = (**(code **)(*arg1 + 0x118))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x110) = 1;
      break;
    default:
      if (iVar1 == 10000) {
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x111) = 1;
      }
      else {
        if (iVar1 != 1) goto switchD_008c1679_caseD_7;
        if (local_4c != 8) {
          iVar3 = (**(code **)(*arg1 + 0x160))();
          goto LAB_008c1d21;
        }
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xfc) = 1;
      }
    }
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

