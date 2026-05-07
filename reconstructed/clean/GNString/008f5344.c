// Function: FUN_008f5344
// Address: 008f5344
// Size: 2209 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_008f5344(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

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
  int64_t lVar23;
  int64_t lVar24;
  int64_t lVar25;
  int64_t lVar26;
  int64_t lVar27;
  int64_t lVar28;
  uint64_t uVar29;
  uint64_t uVar30;
  uint64_t uVar31;
  int64_t lVar32;
  int local_44;
  int64_t local_40;
  short local_36;
  uint local_34;
  
  FUN_0088d1d0();
  uVar29 = 0;
  uVar30 = 0;
  uVar31 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar7 = this_ptr + 0x270;
  lVar8 = this_ptr + 600;
  lVar9 = this_ptr + 0x240;
  lVar10 = this_ptr + 0x228;
  lVar11 = this_ptr + 0x210;
  lVar12 = this_ptr + 0x1f8;
  lVar13 = this_ptr + 0x1e0;
  lVar14 = this_ptr + 0x150;
  lVar15 = this_ptr + 0xf0;
  lVar16 = this_ptr + 0x60;
  lVar17 = this_ptr + 0x59;
  lVar18 = this_ptr + 0x58;
  lVar19 = this_ptr + 0x54;
  lVar20 = this_ptr + 0x50;
  lVar21 = this_ptr + 0x48;
  lVar22 = this_ptr + 0x40;
  lVar23 = this_ptr + 0x38;
  lVar24 = this_ptr + 0x30;
  lVar32 = this_ptr + 0x18;
  lVar25 = this_ptr + 0x14;
  lVar26 = this_ptr + 0x10;
  lVar27 = this_ptr + 0xc;
  lVar28 = this_ptr + 8;
  do {
    psVar4 = &local_36;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_44,param_3,param_4,lVar7,lVar8,lVar9,lVar10,lVar11,lVar12,
                       lVar13,lVar14,lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,
                       lVar24,lVar25,lVar26,lVar27,lVar28,uVar29,uVar30,uVar31,lVar32);
    iVar2 = iVar2 + iVar1;
    if (local_44 == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar29 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_36) {
    case 1:
      if (local_44 != 8) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = (**(code **)(*arg1 + 0x138))();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0x370) = 1;
      goto LAB_008f5b3d;
    case 2:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x371) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 3:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x372) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 4:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x373) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 5:
      if (local_44 == 0xf) {
        *(void*)(this_ptr + 0x20) = *(void*)(this_ptr + 0x18);
        local_40 = this_ptr;
        iVar1 = (**(code **)(*arg1 + 0xf8))(&switchD_008f54f1::switchdataD_008f5c10,&local_34);
        uVar6 = (uint64_t)local_34;
        uVar5 = *(int64_t *)(local_40 + 0x20) - *(int64_t *)(local_40 + 0x18);
        if (uVar5 < uVar6) {
          FUN_0088d550();
        }
        else if (uVar6 < uVar5) {
          *(uint64_t *)(local_40 + 0x20) = *(int64_t *)(local_40 + 0x18) + uVar6;
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
        *(void*)(local_40 + 0x374) = 1;
        this_ptr = local_40;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 10:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x375) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xb:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x376) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xc:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x377) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xd:
      if (local_44 == 10) {
        iVar3 = (**(code **)(*arg1 + 0x140))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x378) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xe:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x379) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0xf:
      if (local_44 == 8) {
        iVar3 = (**(code **)(*arg1 + 0x138))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x37a) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x14:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x37b) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x15:
      if (local_44 == 2) {
        iVar3 = (**(code **)(*arg1 + 0x118))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x37c) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x16:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x37d) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x17:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e9700();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x37e) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x18:
      if (local_44 == 0xc) {
        iVar3 = FUN_008e84b4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x37f) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1e:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x380) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x1f:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x381) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x20:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x382) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x21:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 899) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x22:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 900) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x23:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x385) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x24:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x386) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x28:
      if (local_44 == 0xc) {
        iVar3 = FUN_008f43ce();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x387) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x29:
      if (local_44 == 0xb) {
        iVar3 = (**(code **)(*arg1 + 0x150))();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0x388) = 1;
        goto LAB_008f5b3d;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
    }
    iVar3 = iVar3 + iVar2;
LAB_008f5b3d:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

