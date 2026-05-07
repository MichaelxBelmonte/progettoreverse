// Function: FUN_01c3b620
// Address: 01c3b620
// Size: 1123 bytes
// Class: MUAudioSourcePrincipalItem


/* WARNING: Removing unreachable block (ram,0x01c3ba61) */
/* WARNING: Removing unreachable block (ram,0x01c3ba6a) */

void FUN_01c3b620(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  longlong lVar4;
  void *pvVar5;
  longlong *plVar6;
  longlong *plVar7;
  pthread_key_t pVar8;
  undefined *puVar9;
  longlong lVar10;
  char *pcVar11;
  int iVar12;
  undefined8 *unaff_RDI;
  longlong *plVar13;
  longlong local_78;
  char local_70 [8];
  undefined *local_68;
  undefined8 local_60;
  int local_58;
  undefined8 *local_50;
  longlong *local_48;
  char local_40;
  char local_38 [8];
  
  puVar3 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  puVar9 = &DAT_02572358;
  *puVar3 = &DAT_02572358;
  (*DAT_02572370)();
  local_50 = puVar3;
  if ((undefined *)*unaff_RDI != (undefined *)0x0) {
    local_70[0] = '\0';
    local_78 = 0;
    local_60 = 0xffffffff;
    local_58 = 0;
    local_60._4_4_ = 0;
    local_68 = (undefined *)*unaff_RDI;
    while( true ) {
      if (local_60._4_4_ != 0) {
        if (local_60._4_4_ < 1) {
          iVar12 = -local_60._4_4_;
        }
        else {
          iVar12 = (int)local_60 - local_60._4_4_;
          local_60 = CONCAT44(local_60._4_4_,iVar12);
          FUN_00d23690();
          local_58 = local_58 + local_60._4_4_;
          iVar12 = 0;
        }
        local_60 = CONCAT44(iVar12,(int)local_60);
      }
      lVar4 = (longlong)(int)local_60;
      iVar12 = (int)local_60 + 1;
      local_60 = CONCAT44(local_60._4_4_,iVar12);
      if (*(int *)(local_68 + 0xc) <= iVar12) break;
      lVar10 = *(longlong *)(local_68 + 0x10);
      local_78 = *(longlong *)(lVar10 + (lVar4 + 1) * 8);
      pvVar5 = _pthread_getspecific((pthread_key_t)lVar10);
      pVar8 = (pthread_key_t)lVar10;
      if (pvVar5 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01268dd0();
      plVar6 = local_48;
      if (local_40 == '\0') {
        if (local_48 != (longlong *)0x0) {
          FUN_00d50b00();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_01c3b7a0;
        }
      }
      else if (local_48 != (longlong *)0x0) {
LAB_01c3b7a0:
        local_40 = '\0';
        local_48 = plVar6;
        cVar2 = FUN_00d23d70();
        if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 != '\0') {
          plVar6 = (longlong *)FUN_00e8fc40();
          FUN_007ef010();
          (**(code **)(*plVar6 + 0x18))();
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          puVar3 = local_50;
          plVar13 = (longlong *)plVar6[2];
          if (plVar13 != local_48) {
            if (local_40 == '\0') {
              if (local_48 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_01c3b84c;
              }
              FUN_00d50b00();
              plVar1 = (longlong *)plVar6[2];
              plVar6[2] = (longlong)local_48;
              plVar13 = local_48;
            }
            else {
              local_40 = '\0';
              plVar7 = local_48;
LAB_01c3b84c:
              plVar6[2] = (longlong)plVar7;
              plVar1 = plVar13;
              plVar13 = plVar7;
            }
            pVar8 = (pthread_key_t)plVar1;
            if (plVar1 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar13 = local_48;
            }
          }
          if ((local_40 != '\0') && (plVar13 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          pvVar5 = _pthread_getspecific(pVar8);
          if (pvVar5 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_0125e7c0();
          plVar13 = (longlong *)plVar6[3];
          plVar7 = plVar13;
          if (plVar13 != local_48) {
            if (local_40 == '\0') {
              if (local_48 == (longlong *)0x0) {
                plVar7 = (longlong *)0x0;
                goto LAB_01c3b8f0;
              }
              FUN_00d50b00();
              plVar13 = (longlong *)plVar6[3];
              plVar6[3] = (longlong)local_48;
              plVar7 = local_48;
            }
            else {
              local_40 = '\0';
              plVar7 = local_48;
LAB_01c3b8f0:
              plVar6[3] = (longlong)plVar7;
            }
            if (plVar13 != (longlong *)0x0) {
              FUN_00d50b20();
              plVar7 = local_48;
            }
          }
          if ((local_40 != '\0') && (plVar7 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          local_40 = '\0';
          local_48 = plVar6;
          FUN_00d21140();
          if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
        FUN_00d50b20();
      }
    }
    puVar9 = local_68;
    FUN_001159b0();
  }
  if (*(int *)((longlong)puVar3 + 0xc) != 0) {
    FUN_00d23310();
    pVar8 = (pthread_key_t)CONCAT71((int7)((ulonglong)puVar9 >> 8),local_70[0]);
    pcVar11 = local_38;
    if (local_70[0] != '\0') {
      pcVar11 = local_70;
    }
    local_38[0] = local_70[0];
    *pcVar11 = '\0';
    if ((local_70[0] != '\0') && (local_78 != 0)) {
      FUN_00d50b20();
    }
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_013df480();
    pvVar5 = _pthread_getspecific(pVar8);
    if (pvVar5 != (void *)0x0) {
      FUN_00e8b990();
    }
    FUN_0138b6e0();
    if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (local_38[0] != '\0') {
      FUN_00d50b20();
    }
  }
  FUN_00d50b20();
  return;
}


