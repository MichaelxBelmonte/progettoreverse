// Function: FUN_016818c0
// Address: 016818c0
// Size: 1275 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01681bbb) */
/* WARNING: Removing unreachable block (ram,0x01681bcb) */
/* WARNING: Removing unreachable block (ram,0x01681c59) */
/* WARNING: Removing unreachable block (ram,0x01681c65) */
/* WARNING: Removing unreachable block (ram,0x01681c3b) */
/* WARNING: Removing unreachable block (ram,0x01681c47) */
/* WARNING: Removing unreachable block (ram,0x01681d49) */
/* WARNING: Removing unreachable block (ram,0x01681d56) */

void FUN_016818c0(void)

{
  bool bVar1;
  undefined8 *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong lVar6;
  void *pvVar7;
  undefined8 *puVar8;
  int iVar9;
  longlong *unaff_RSI;
  longlong *local_78;
  char local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  char local_50;
  undefined8 *local_48;
  undefined8 local_40;
  int local_38;
  
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar8 = (undefined8 *)&DAT_02572358;
  *puVar5 = &DAT_02572358;
  local_60 = puVar5;
  (*DAT_02572370)();
  if (*unaff_RSI != 0) {
    iVar4 = FUN_00c8d620();
    local_68 = (undefined8 *)CONCAT44(local_68._4_4_,iVar4);
    if (0 < iVar4) {
      iVar4 = 0;
      bVar1 = true;
      do {
        do {
          lVar6 = FUN_00c8df10();
        } while (lVar6 == 0);
        if (!bVar1) break;
        pvVar7 = _pthread_getspecific((pthread_key_t)puVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_016670b0();
        if (local_50 == '\0') {
          if (local_58 != (undefined8 *)0x0) {
            FUN_00d50b00();
            if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
              FUN_00d50b20();
            }
            goto LAB_01681a06;
          }
        }
        else if (local_58 != (undefined8 *)0x0) {
LAB_01681a06:
          pvVar7 = _pthread_getspecific((pthread_key_t)puVar8);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          cVar3 = FUN_0124d450();
          if (cVar3 != '\0') {
            pvVar7 = _pthread_getspecific((pthread_key_t)puVar8);
            if (pvVar7 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124c6e0();
            puVar5 = local_58;
            if (local_50 == '\0') {
              if (local_58 != (undefined8 *)0x0) {
                FUN_00d50b00();
                if ((local_50 != '\0') && (local_58 != (undefined8 *)0x0)) {
                  FUN_00d50b20();
                }
                goto LAB_01681ac0;
              }
            }
            else if (local_58 != (undefined8 *)0x0) {
LAB_01681ac0:
              local_50 = '\0';
              local_58 = (undefined8 *)0x0;
              local_48 = puVar5;
              local_40 = 0xffffffff;
              local_38 = 0;
              local_40._4_4_ = 0;
              while( true ) {
                if (local_40._4_4_ != 0) {
                  if (local_40._4_4_ < 1) {
                    iVar9 = -local_40._4_4_;
                  }
                  else {
                    iVar9 = (int)local_40 - local_40._4_4_;
                    local_40 = CONCAT44(local_40._4_4_,iVar9);
                    FUN_00d23690();
                    local_38 = local_38 + local_40._4_4_;
                    iVar9 = 0;
                  }
                  local_40 = CONCAT44(iVar9,(int)local_40);
                }
                lVar6 = (longlong)(int)local_40;
                iVar9 = (int)local_40 + 1;
                local_40 = CONCAT44(local_40._4_4_,iVar9);
                if (*(int *)((longlong)local_48 + 0xc) <= iVar9) break;
                local_58 = *(undefined8 **)(local_48[2] + 8 + lVar6 * 8);
                pvVar7 = _pthread_getspecific((pthread_key_t)local_48[2]);
                if (pvVar7 != (void *)0x0) {
                  FUN_00e8b990();
                }
                cVar3 = FUN_01397570();
                if (cVar3 != '\0') {
                  FUN_00d235a0();
                }
              }
              puVar8 = local_48;
              FUN_00115190();
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        iVar4 = iVar4 + 1;
        bVar1 = iVar4 < (int)local_68;
      } while (iVar4 != (int)local_68);
    }
  }
  puVar5 = local_60;
  if (*(int *)((longlong)local_60 + 0xc) != 0) {
    FUN_013206a0();
    puVar2 = local_58;
    if ((((local_50 == '\0') && (local_58 != (undefined8 *)0x0)) &&
        (FUN_00d50b00(), local_50 != '\0')) && (local_58 != (undefined8 *)0x0)) {
      FUN_00d50b20();
    }
    local_68 = puVar2;
    local_50 = '\0';
    local_58 = (undefined8 *)0x0;
    local_48 = puVar5;
    local_38 = 0;
    local_40 = 0;
    if (0 < *(int *)((longlong)puVar5 + 0xc)) {
      lVar6 = 0;
      do {
        local_58 = *(undefined8 **)(puVar5[2] + lVar6 * 8);
        pvVar7 = _pthread_getspecific((pthread_key_t)puVar8);
        if (pvVar7 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_78 = (longlong *)0x0;
        local_70 = '\0';
        puVar8 = (undefined8 *)0x0;
        FUN_01397bb0(0,&local_78);
        if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
          (**(code **)(*local_78 + 0x10))();
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        local_40 = CONCAT44(local_40._4_4_,(int)lVar6);
        puVar5 = local_60;
      } while ((int)lVar6 < *(int *)((longlong)local_60 + 0xc));
    }
    FUN_00115190();
    if (local_68 != (undefined8 *)0x0) {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


