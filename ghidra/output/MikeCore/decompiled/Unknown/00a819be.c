// Function: FUN_00a819be
// Address: 00a819be
// Size: 4122 bytes
// Class: Unknown
// String references:
//   "/System/Library/Frameworks/AVFoundation.framework/Versions/A/AVFoundation"


int FUN_00a819be(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  ulonglong uVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  longlong lVar34;
  longlong lVar35;
  longlong lVar36;
  longlong lVar37;
  longlong lVar38;
  ulonglong uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  int local_4c;
  short local_46 [3];
  uint local_34;
  
  FUN_0088d1d0();
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  iVar1 = (**(code **)(*unaff_RSI + 200))();
  lVar9 = unaff_RDI + 0xb58;
  lVar10 = unaff_RDI + 0xaf0;
  lVar11 = unaff_RDI + 0xa88;
  lVar12 = unaff_RDI + 0xa20;
  lVar13 = unaff_RDI + 0x9b8;
  lVar14 = unaff_RDI + 0x950;
  lVar15 = unaff_RDI + 0x8e8;
  lVar16 = unaff_RDI + 0x880;
  lVar17 = unaff_RDI + 0x818;
  lVar18 = unaff_RDI + 0x7b0;
  lVar19 = unaff_RDI + 0x748;
  lVar20 = unaff_RDI + 0x6e0;
  lVar21 = unaff_RDI + 0x678;
  lVar22 = unaff_RDI + 0x610;
  lVar23 = unaff_RDI + 0x5a8;
  lVar24 = unaff_RDI + 0x540;
  lVar25 = unaff_RDI + 0x4d8;
  lVar26 = unaff_RDI + 0x470;
  lVar27 = unaff_RDI + 0x408;
  lVar28 = unaff_RDI + 0x3a0;
  lVar29 = unaff_RDI + 0x338;
  lVar30 = unaff_RDI + 0x2d0;
  lVar31 = unaff_RDI + 0x268;
  lVar32 = unaff_RDI + 0x200;
  lVar33 = unaff_RDI + 0x198;
  lVar34 = unaff_RDI + 0x130;
  lVar35 = unaff_RDI + 200;
  lVar36 = unaff_RDI + 0xc0;
  lVar37 = unaff_RDI + 0xb8;
  lVar38 = unaff_RDI + 8;
  do {
    psVar4 = local_46;
    iVar2 = (**(code **)(*unaff_RSI + 0xd8))
                      (psVar4,&local_4c,param_3,param_4,lVar9,lVar10,lVar11,lVar12,lVar13,lVar14,
                       lVar15,lVar16,lVar17,lVar18,lVar19,lVar20,lVar21,lVar22,lVar23,lVar24,lVar25,
                       lVar26,lVar27,lVar28,lVar29,lVar30,lVar31,lVar32,lVar33,lVar34,lVar35,lVar36,
                       lVar37,lVar38,uVar39,uVar40,uVar41);
    iVar2 = iVar2 + iVar1;
    if (local_4c == 0) {
      iVar1 = (**(code **)(*unaff_RSI + 0xd0))();
      if ((uVar39 & 1) != 0) {
        operator_delete(psVar4);
      }
      *(int *)(unaff_RSI + 3) = (int)unaff_RSI[3] + -1;
      return iVar1 + iVar2;
    }
    switch(local_46[0]) {
    case 0x65:
      if (local_4c != 0xc) {
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      }
      iVar3 = FUN_00a72448();
      iVar3 = iVar3 + iVar2;
      *(undefined1 *)(unaff_RDI + 0xd6a) = 1;
      goto LAB_00a82983;
    case 0x66:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a72d94();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd6b) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x67:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a73544();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd6c) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x68:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a73cf4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd6d) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x69:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a744a4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd6e) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x6a:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a74c54();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd6f) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x6b:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a75404();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd70) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x6c:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a75bb4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd71) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x6d:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a76364();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd72) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x6e:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a76b14();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd73) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x6f:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a772c4();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd74) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x70:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a77a74();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd75) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x71:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7820c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd76) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x72:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a789bc();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd77) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x73:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7916c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd78) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x74:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7991c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd79) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x75:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7a0cc();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7a) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x76:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7a87c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7b) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x77:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7b02c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7c) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x78:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7b7dc();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7d) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x79:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7bf8c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7e) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x7a:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7c73c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd7f) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x7b:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7ceec();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd80) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x7c:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7d69c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd81) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x7d:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7de4c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd82) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x7e:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7e5fc();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd83) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x7f:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7edac();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd84) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x80:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7f55c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd85) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x81:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a7fd0c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd86) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x82:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a804bc();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd87) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    case 0x83:
      if (local_4c == 0xc) {
        iVar3 = FUN_00a80c6c();
        iVar3 = iVar3 + iVar2;
        *(undefined1 *)(unaff_RDI + 0xd88) = 1;
        goto LAB_00a82983;
      }
      iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      break;
    default:
      switch(local_46[0]) {
      case 1:
        if (local_4c == 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0xd60) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 2:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0x10);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x18); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
          }
          *(longlong *)(unaff_RDI + 0x18) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x10) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd61) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 3:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0x28);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x30); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
          }
          *(longlong *)(unaff_RDI + 0x30) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x28) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd62) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 4:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0x40);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x48); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
          }
          *(longlong *)(unaff_RDI + 0x48) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x40) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd63) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 5:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0x58);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x60); lVar5 != lVar6; lVar5 = lVar5 + -0x50) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x50))();
          }
          *(longlong *)(unaff_RDI + 0x60) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_009205f8();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x58) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x50;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd64) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 6:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0x70);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x78); lVar5 != lVar6; lVar5 = lVar5 + -0x50) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x50))();
          }
          *(longlong *)(unaff_RDI + 0x78) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_009205f8();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x70) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x50;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd65) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 7:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0x88);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0x90); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
          }
          *(longlong *)(unaff_RDI + 0x90) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0x88) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd66) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 8:
        if (local_4c == 0xf) {
          lVar6 = *(longlong *)(unaff_RDI + 0xa0);
          uVar8 = extraout_XMM0_Da;
          for (lVar5 = *(longlong *)(unaff_RDI + 0xa8); lVar5 != lVar6; lVar5 = lVar5 + -0x20) {
            uVar8 = (*(code *)**(undefined8 **)(lVar5 + -0x20))();
          }
          *(longlong *)(unaff_RDI + 0xa8) = lVar6;
          iVar1 = (**(code **)(*unaff_RSI + 0xf8))(uVar8,&local_34);
          FUN_00a63e90();
          iVar1 = iVar1 + iVar2;
          if (local_34 != 0) {
            lVar6 = 0;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*(longlong *)(*(longlong *)(unaff_RDI + 0xa0) + lVar6) + 0x10))()
              ;
              iVar1 = iVar1 + iVar2;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x20;
            } while (uVar7 < local_34);
          }
          iVar3 = (**(code **)(*unaff_RSI + 0x100))();
          iVar3 = iVar3 + iVar1;
          *(undefined1 *)(unaff_RDI + 0xd67) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 9:
        if (local_4c == 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0xd68) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      case 10:
        if (local_4c == 10) {
          iVar3 = (**(code **)(*unaff_RSI + 0x140))();
          iVar3 = iVar3 + iVar2;
          *(undefined1 *)(unaff_RDI + 0xd69) = 1;
          goto LAB_00a82983;
        }
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
        break;
      default:
        iVar3 = (**(code **)(*unaff_RSI + 0x160))();
      }
    }
    iVar3 = iVar3 + iVar2;
LAB_00a82983:
    iVar1 = (**(code **)(*unaff_RSI + 0xe0))();
    iVar1 = iVar1 + iVar3;
  } while( true );
}


