// Function: FUN_00a819be
// Address: 00a819be
// Size: 4122 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation"

int FUN_00a819be(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *arg1;
  int64_t this_ptr;
  uint64_t uVar7;
  uint32_t extraout_XMM0_Da;
  uint32_t uVar8;
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
  int64_t lVar29;
  int64_t lVar30;
  int64_t lVar31;
  int64_t lVar32;
  int64_t lVar33;
  int64_t lVar34;
  int64_t lVar35;
  int64_t lVar36;
  int64_t lVar37;
  int64_t lVar38;
  uint64_t uVar39;
  uint64_t uVar40;
  uint64_t uVar41;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  iVar1 = (**(code **)(*arg1 + 200))();
  lVar9 = this_ptr + 0xb58;
  lVar10 = this_ptr + 0xaf0;
  lVar11 = this_ptr + 0xa88;
  lVar12 = this_ptr + 0xa20;
  lVar13 = this_ptr + 0x9b8;
  lVar14 = this_ptr + 0x950;
  lVar15 = this_ptr + 0x8e8;
  lVar16 = this_ptr + 0x880;
  lVar17 = this_ptr + 0x818;
  lVar18 = this_ptr + 0x7b0;
  lVar19 = this_ptr + 0x748;
  lVar20 = this_ptr + 0x6e0;
  lVar21 = this_ptr + 0x678;
  lVar22 = this_ptr + 0x610;
  lVar23 = this_ptr + 0x5a8;
  lVar24 = this_ptr + 0x540;
  lVar25 = this_ptr + 0x4d8;
  lVar26 = this_ptr + 0x470;
  lVar27 = this_ptr + 0x408;
  lVar28 = this_ptr + 0x3a0;
  lVar29 = this_ptr + 0x338;
  lVar30 = this_ptr + 0x2d0;
  lVar31 = this_ptr + 0x268;
  lVar32 = this_ptr + 0x200;
  lVar33 = this_ptr + 0x198;
  lVar34 = this_ptr + 0x130;
  lVar35 = this_ptr + 200;
  lVar36 = this_ptr + 0xc0;
  lVar37 = this_ptr + 0xb8;
  lVar38 = this_ptr + 8;
  do {
    psVar4 = local_46;
    iVar2 = (**(code **)(*arg1 + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,
                       lVar26,lVar27,lVar28,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,
                       lVar37,lVar38,uVar39,uVar40,uVar41);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*arg1 + 0xd0))();
      if ((uVar39 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(arg1 + 3) = (int)arg1[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_46[0]) {
    case 0x65:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      }
      iVar3 = FUN_00a72448();
      iVar3 = iVar3 + iVar2;
      *(void*)(this_ptr + 0xd6a) = 1;
      goto LAB_00a82983;
    case 0x66:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a72d94();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd6b) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x67:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a73544();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd6c) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x68:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a73cf4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd6d) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x69:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a744a4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd6e) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x6a:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a74c54();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd6f) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x6b:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a75404();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd70) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x6c:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a75bb4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd71) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x6d:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a76364();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd72) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x6e:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a76b14();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd73) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x6f:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a772c4();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd74) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x70:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a77a74();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd75) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x71:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7820c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd76) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x72:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a789bc();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd77) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x73:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7916c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd78) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x74:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7991c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd79) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x75:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7a0cc();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd7a) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x76:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7a87c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd7b) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x77:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7b02c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd7c) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x78:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7b7dc();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd7d) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x79:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7bf8c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd7e) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x7a:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7c73c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd7f) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x7b:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7ceec();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd80) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x7c:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7d69c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd81) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x7d:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7de4c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd82) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x7e:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7e5fc();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd83) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x7f:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7edac();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd84) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x80:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7f55c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd85) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x81:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7fd0c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd86) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x82:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a804bc();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd87) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    case 0x83:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a80c6c();
        iVar3 = iVar3 + iVar2;
        *(void*)(this_ptr + 0xd88) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*arg1 + 0x160))();
      break;
    default:
      switch(local_46[0]) {
      case 1:
        if (local_4c == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0xd60) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 2:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0x10);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x18); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (***(void**)(lVar5 + -0x20))();
          }
          *(int64_t *)(this_ptr + 0x18) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x10) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd61) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 3:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0x28);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (***(void**)(lVar5 + -0x20))();
          }
          *(int64_t *)(this_ptr + 0x30) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x28) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd62) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 4:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0x40);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x48); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (***(void**)(lVar5 + -0x20))();
          }
          *(int64_t *)(this_ptr + 0x48) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x40) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd63) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 5:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0x58);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x60); lVar5 != lVar6; lVar5 = lVar5 + -0x50) {
            uVar8 = (***(void**)(lVar5 + -0x50))();
          }
          *(int64_t *)(this_ptr + 0x60) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_009205f8();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x58) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x50;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd64) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 6:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0x70);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x78); lVar5 != lVar6; lVar5 = lVar5 + -0x50) {
            uVar8 = (***(void**)(lVar5 + -0x50))();
          }
          *(int64_t *)(this_ptr + 0x78) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_009205f8();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x70) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x50;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd65) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 7:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0x88);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0x90); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (***(void**)(lVar5 + -0x20))();
          }
          *(int64_t *)(this_ptr + 0x90) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0x88) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd66) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 8:
        if (local_4c == 0xf) {
          lVar6 = *(int64_t *)(this_ptr + 0xa0);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(int64_t *)(this_ptr + 0xa8); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (***(void**)(lVar5 + -0x20))();
          }
          *(int64_t *)(this_ptr + 0xa8) = lVar6;
          iVar1 = (**(code **)(*arg1 + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(int64_t *)(*(int64_t *)(this_ptr + 0xa0) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*arg1 + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(void*)(this_ptr + 0xd67) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 9:
        if (local_4c == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0xd68) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      case 10:
        if (local_4c == 10) {
          iVar3 = (**(code **)(*arg1 + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(void*)(this_ptr + 0xd69) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*arg1 + 0x160))();
        break;
      default:
        iVar3 = (**(code **)(*arg1 + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_00a82983:
    iVar1 = (**(code **)(*arg1 + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}

