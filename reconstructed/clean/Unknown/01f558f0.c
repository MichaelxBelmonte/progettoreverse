// Function: FUN_01f558f0
// Address: 01f558f0
// Size: 1763 bytes
// Class: Unknown

int64_t * FUN_01f558f0(uint param_1,uint64_t param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int64_t *this_ptr;
  uint uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  int64_t *local_res8;
  int64_t local_118;
  char local_110;
  int64_t local_108;
  char local_100;
  int64_t local_f8;
  char local_f0;
  int64_t local_e8;
  char local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_b8;
  char local_b0;
  int64_t local_a8;
  char local_a0;
  int64_t local_98;
  char local_90;
  uint8_t local_84 [4];
  uint64_t local_80;
  uint64_t local_78;
  uint64_t local_70;
  int64_t local_50;
  char local_48;
  byte local_33;
  byte local_32;
  char local_31;
  
  uVar3 = param_4 << 0x1e | param_4 - 4U >> 2;
  if (uVar3 < 8) {
    uVar4 = (uint64_t)param_1;
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
        local_70 = (uint64_t)param_1;
        local_78 = (uint64_t)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        do {
          uVar4 = local_70;
          lVar5 = 0;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar8 = *(int64_t *)(local_50 + 0x10);
            FUN_00ccd300(local_84,&local_33);
            if ((local_110 != '\0') && (local_118 != 0)) {
              FUN_00d50b20();
            }
            lVar7 = (int64_t)iVar6;
            bVar1 = local_33 >> 4;
            *(void*)(lVar8 + lVar7) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + (uint64_t)bVar1 * 4);
            *(void*)(lVar8 + 1 + lVar7) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + 1 + (uint64_t)bVar1 * 4);
            *(void*)(lVar8 + 2 + lVar7) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + 2 + (uint64_t)bVar1 * 4);
            *(void*)(lVar8 + 3 + lVar7) = 0xff;
            local_32 = (byte)(local_33 & 0xf);
            *(void*)(lVar8 + 4 + lVar7) =
                 *(void*)
                  (*(int64_t *)(*local_res8 + 0x10) + (uint64_t)(local_33 & 0xf) * 4);
            *(void*)(lVar8 + 5 + lVar7) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + 1 + (uint64_t)local_32 * 4);
            *(void*)(lVar8 + 6 + lVar7) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + 2 + (uint64_t)local_32 * 4);
            *(void*)(lVar8 + 7 + lVar7) = 0xff;
            lVar5 = lVar5 + 2;
            iVar6 = iVar6 + 8;
          } while (lVar5 < (int64_t)uVar4);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (int64_t)local_80);
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
        local_78 = (uint64_t)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        local_70 = uVar4;
        do {
          uVar4 = local_70;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar5 = *(int64_t *)(local_50 + 0x10);
            FUN_00ccd300(local_84,&local_32);
            if ((local_100 != '\0') && (local_108 != 0)) {
              FUN_00d50b20();
            }
            lVar8 = (int64_t)iVar6;
            *(void*)(lVar5 + lVar8) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + (uint64_t)local_32 * 4);
            *(void*)(lVar5 + 1 + lVar8) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + 1 + (uint64_t)local_32 * 4);
            *(void*)(lVar5 + 2 + lVar8) =
                 *(void*)(*(int64_t *)(*local_res8 + 0x10) + 2 + (uint64_t)local_32 * 4);
            *(void*)(lVar5 + 3 + lVar8) = 0xff;
            iVar6 = iVar6 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (int64_t)local_80);
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
        local_78 = (uint64_t)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        local_70 = uVar4;
        local_31 = cVar9;
        do {
          uVar4 = local_70;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar5 = *(int64_t *)(local_50 + 0x10);
            FUN_00ccd300(local_84,lVar5 + 2 + (int64_t)iVar6);
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
            *(void*)(lVar5 + 3) = 0xff;
            iVar6 = iVar6 + 4;
            uVar4 = uVar4 - 1;
          } while (uVar4 != 0);
          iVar2 = iVar2 + param_1 * -4;
          cVar9 = local_31;
        } while (1 < (int64_t)local_80);
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
        local_78 = (uint64_t)param_3;
        iVar2 = (param_3 - 1) * param_1 * 4;
        local_70 = uVar4;
        local_31 = cVar9;
        do {
          uVar4 = local_70;
          iVar6 = iVar2;
          local_80 = local_78;
          local_78 = local_78 - 1;
          do {
            lVar5 = *(int64_t *)(local_50 + 0x10);
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
        } while (1 < (int64_t)local_80);
      }
    }
    *(void*)(this_ptr + 1) = 0;
    if (cVar9 != '\0') goto LAB_01f55ff0;
    if (local_50 != 0) {
      FUN_00d50b00();
      goto LAB_01f55ff0;
    }
  }
  else {
switchD_01f55935_caseD_2:
    *(void*)(this_ptr + 1) = 0;
  }
  local_50 = 0;
LAB_01f55ff0:
  *this_ptr = local_50;
  *(void*)(this_ptr + 1) = 1;
  return this_ptr;
}

