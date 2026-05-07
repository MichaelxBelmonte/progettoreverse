// Function: FUN_01f558f0
// Address: 01f558f0
// Size: 1763 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01f55b27) */
/* WARNING: Removing unreachable block (ram,0x01f55b30) */
/* WARNING: Removing unreachable block (ram,0x01f55c88) */
/* WARNING: Removing unreachable block (ram,0x01f55c91) */
/* WARNING: Removing unreachable block (ram,0x01f55966) */
/* WARNING: Removing unreachable block (ram,0x01f5596f) */
/* WARNING: Removing unreachable block (ram,0x01f55e27) */
/* WARNING: Removing unreachable block (ram,0x01f55e30) */

longlong * FUN_01f558f0(uint param_1,undefined8 param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  longlong *unaff_RDI;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  longlong *local_res8;
  longlong local_118;
  char local_110;
  longlong local_108;
  char local_100;
  longlong local_f8;
  char local_f0;
  longlong local_e8;
  char local_e0;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  undefined1 local_84 [4];
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  longlong local_50;
  char local_48;
  byte local_33;
  byte local_32;
  char local_31;
  
  uVar3 = param_4 << 0x1e | param_4 - 4U >> 2;
  if (uVar3 < 8) {
    uVar4 = (ulonglong)param_1;
    switch(uVar3) {
    case 0:
      FUN_00c8e690();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      local_31 = local_50 != 0;
      cVar9 = local_31;
      if ((0 < (int)param_3) && (0 < (int)param_1)) {
        local_70 = (ulonglong)param_1;
        local_78 = (ulonglong)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        do {
          uVar4 = local_70;
          lVar5 = 0;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar8 = *(longlong *)(local_50 + 0x10);
            FUN_00ccd300(local_84,&local_33);
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            lVar7 = (longlong)iVar6;
            bVar1 = local_33 >> 4;
            *(undefined1 *)(lVar8 + lVar7) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + (ulonglong)bVar1 * 4);
            *(undefined1 *)(lVar8 + 1 + lVar7) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + 1 + (ulonglong)bVar1 * 4);
            *(undefined1 *)(lVar8 + 2 + lVar7) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + 2 + (ulonglong)bVar1 * 4);
            *(undefined1 *)(lVar8 + 3 + lVar7) = 0xff;
            local_32 = (byte)(local_33 & 0xf);
            *(undefined1 *)(lVar8 + 4 + lVar7) =
                 *(undefined1 *)
                  (*(longlong *)(*local_res8 + 0x10) + (ulonglong)(local_33 & 0xf) * 4);
            *(undefined1 *)(lVar8 + 5 + lVar7) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + 1 + (ulonglong)local_32 * 4);
            *(undefined1 *)(lVar8 + 6 + lVar7) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + 2 + (ulonglong)local_32 * 4);
            *(undefined1 *)(lVar8 + 7 + lVar7) = 0xff;
            lVar5 = lVar5 + 2;
            iVar6 = iVar6 + 8;
          } while (lVar5 < (longlong)uVar4);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (longlong)local_80);
      }
      break;
    case 1:
      FUN_00c8e690();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      local_31 = local_50 != 0;
      cVar9 = local_31;
      if ((0 < (int)param_3) && (0 < (int)param_1)) {
        local_78 = (ulonglong)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        local_70 = uVar4;
        do {
          uVar4 = local_70;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar5 = *(longlong *)(local_50 + 0x10);
            FUN_00ccd300(local_84,&local_32);
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = (longlong)iVar6;
            *(undefined1 *)(lVar5 + lVar8) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + (ulonglong)local_32 * 4);
            *(undefined1 *)(lVar5 + 1 + lVar8) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + 1 + (ulonglong)local_32 * 4);
            *(undefined1 *)(lVar5 + 2 + lVar8) =
                 *(undefined1 *)(*(longlong *)(*local_res8 + 0x10) + 2 + (ulonglong)local_32 * 4);
            *(undefined1 *)(lVar5 + 3 + lVar8) = 0xff;
            iVar6 = iVar6 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (longlong)local_80);
      }
      break;
    default:
      goto switchD_01f55935_caseD_2;
    case 5:
      FUN_00c8e690();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      cVar9 = local_50 != 0;
      if ((0 < (int)param_3) && (0 < (int)param_1)) {
        local_78 = (ulonglong)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        local_70 = uVar4;
        local_31 = cVar9;
        do {
          uVar4 = local_70;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar5 = *(longlong *)(local_50 + 0x10);
            FUN_00ccd300(local_84,lVar5 + 2 + (longlong)iVar6);
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + iVar6;
            FUN_00ccd300(local_84,lVar5 + 1);
            if ((local_e0 != '\0') && (local_e8 != 0)) {
              FUN_00d50b20();
            }
            FUN_00ccd300(local_84,lVar5);
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            *(undefined1 *)(lVar5 + 3) = 0xff;
            iVar6 = iVar6 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (longlong)local_80);
      }
      break;
    case 7:
      FUN_00c8e690();
      if ((local_48 == '\0') && (local_50 != 0)) {
        FUN_00d50b00();
      }
      FUN_00c92170();
      cVar9 = local_50 != 0;
      if ((0 < (int)param_3) && (0 < (int)param_1)) {
        local_78 = (ulonglong)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        local_70 = uVar4;
        local_31 = cVar9;
        do {
          uVar4 = local_70;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar5 = *(longlong *)(local_50 + 0x10);
            FUN_00ccd300(local_84,lVar5 + iVar6 + 2);
            if ((local_c0 != '\0') && (local_c8 != 0)) {
              FUN_00d50b20();
            }
            lVar5 = lVar5 + iVar6;
            FUN_00ccd300(local_84,lVar5 + 1);
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            FUN_00ccd300(local_84,lVar5);
            if ((local_a0 != '\0') && (local_a8 != 0)) {
              FUN_00d50b20();
            }
            FUN_00ccd300(local_84,lVar5 + 3);
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            iVar6 = iVar6 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (longlong)local_80);
      }
    }
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (cVar9 != '\0') goto LAB_01f55ff0;
    if (local_50 != 0) {
      FUN_00d50b00();
      goto LAB_01f55ff0;
    }
  }
  else {
switchD_01f55935_caseD_2:
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  local_50 = 0;
LAB_01f55ff0:
  *unaff_RDI = local_50;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return unaff_RDI;
}


