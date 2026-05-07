// Function: FUN_01c77ec0
// Address: 01c77ec0
// Size: 1591 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x01c78446) */
/* WARNING: Removing unreachable block (ram,0x01c7844f) */
/* WARNING: Removing unreachable block (ram,0x01c78340) */
/* WARNING: Removing unreachable block (ram,0x01c783fd) */
/* WARNING: Removing unreachable block (ram,0x01c7848b) */
/* WARNING: Removing unreachable block (ram,0x01c78497) */
/* WARNING: Removing unreachable block (ram,0x01c78106) */
/* WARNING: Removing unreachable block (ram,0x01c78116) */
/* WARNING: Removing unreachable block (ram,0x01c77fca) */
/* WARNING: Removing unreachable block (ram,0x01c77fd3) */
/* WARNING: Removing unreachable block (ram,0x01c7824f) */
/* WARNING: Removing unreachable block (ram,0x01c78258) */
/* WARNING: Removing unreachable block (ram,0x01c7803c) */
/* WARNING: Removing unreachable block (ram,0x01c7803a) */
/* WARNING: Removing unreachable block (ram,0x01c78060) */
/* WARNING: Removing unreachable block (ram,0x01c78062) */
/* WARNING: Removing unreachable block (ram,0x01c78290) */
/* WARNING: Removing unreachable block (ram,0x01c782b0) */
/* WARNING: Removing unreachable block (ram,0x01c78292) */
/* WARNING: Removing unreachable block (ram,0x01c782b2) */

char FUN_01c77ec0(pthread_key_t param_1,char param_2)

{
  longlong lVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  longlong lVar7;
  longlong *plVar8;
  pthread_key_t pVar9;
  longlong lVar10;
  char cVar11;
  longlong unaff_RDI;
  char cVar12;
  longlong local_a8;
  char local_a0;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  char local_50;
  int local_40;
  
  lVar10 = local_58;
  if (*(longlong *)(unaff_RDI + 0x2c8) == 0) {
    local_60 = *(longlong *)(unaff_RDI + 0x198);
    if (local_60 == 0) {
      if (*(longlong *)(unaff_RDI + 0x1a8) == 0) {
        cVar11 = '\x01';
        bVar3 = false;
        local_60 = 0;
      }
      else {
        FUN_00d50b00();
        pvVar6 = _pthread_getspecific(param_1);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012cb480();
        if (local_50 == '\0') {
          if (local_58 == 0) goto LAB_01c78120;
          FUN_00d50b00();
LAB_01c77fd8:
          local_50 = '\0';
          local_58 = 0;
          local_40 = -1;
          bVar3 = false;
          local_60 = 0;
          while( true ) {
            lVar7 = (longlong)local_40;
            local_40 = local_40 + 1;
            if (*(int *)(lVar10 + 0xc) <= local_40) break;
            lVar1 = *(longlong *)(lVar10 + 0x10);
            local_58 = *(longlong *)(lVar1 + 8 + lVar7 * 8);
            if (local_60 != 0) {
              cVar11 = '\0';
              lVar10 = lVar1;
              goto LAB_01c78133;
            }
            pvVar6 = _pthread_getspecific((pthread_key_t)lVar1);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_0124df10();
            if (local_a8 == 0) {
              local_60 = 0;
            }
            else {
              bVar3 = true;
              local_60 = local_a8;
              if (local_a0 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          cVar11 = '\x01';
LAB_01c78133:
          param_1 = (pthread_key_t)lVar10;
          FUN_00115e00();
          FUN_00d50b20();
        }
        else {
          if (local_58 != 0) goto LAB_01c77fd8;
LAB_01c78120:
          cVar11 = '\x01';
          local_60 = 0;
          bVar3 = false;
        }
        FUN_00d50b20();
      }
    }
    else {
      FUN_00d50b00();
      bVar3 = true;
      cVar11 = '\x01';
    }
  }
  else {
    FUN_00d50b00();
    FUN_00d50b20();
    bVar3 = false;
    local_60 = 0;
    cVar11 = '\0';
  }
  lVar10 = local_58;
  cVar12 = '\0';
  if ((cVar11 != '\0') && (cVar12 = '\0', local_60 != 0)) {
    pvVar6 = _pthread_getspecific(param_1);
    if (pvVar6 != (void *)0x0) {
      FUN_00e8b990();
    }
    cVar4 = FUN_0134a950();
    cVar12 = '\0';
    if (cVar4 == '\0') {
      cVar12 = cVar11;
    }
  }
  FUN_01caeae0();
  if ((local_50 != '\0') && (local_58 != 0)) {
    FUN_00d50b20();
  }
  if (local_58 != 0) {
    FUN_01caeae0();
    FUN_01d66ab0();
    if ((local_50 != '\0') && (local_58 != 0)) {
      FUN_00d50b20();
    }
  }
  if (cVar12 != '\0') {
    FUN_0141b540();
    if (local_50 == '\0') {
      if (local_58 != 0) {
        FUN_00d50b00();
        goto LAB_01c7825d;
      }
    }
    else if (local_58 != 0) {
LAB_01c7825d:
      local_58 = 0;
      local_40 = -1;
      local_68 = 0;
      do {
        lVar7 = (longlong)local_40;
        local_40 = local_40 + 1;
        bVar2 = 1;
        if (*(int *)(lVar10 + 0xc) <= local_40) goto LAB_01c7835a;
        local_58 = *(longlong *)(*(longlong *)(lVar10 + 0x10) + 8 + lVar7 * 8);
        pvVar6 = _pthread_getspecific((pthread_key_t)*(longlong *)(lVar10 + 0x10));
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        iVar5 = FUN_0141bab0();
      } while (iVar5 != 3);
      lVar10 = local_58;
      if (local_58 == 0) {
        local_68 = 0;
      }
      else {
        FUN_00d50b00();
        bVar2 = 0;
        local_68 = local_58;
      }
LAB_01c7835a:
      pVar9 = (pthread_key_t)lVar10;
      FUN_002a08f0();
      FUN_00d50b20();
      if (local_68 == 0) {
        cVar12 = '\0';
      }
      if ((param_2 != '\0') && (cVar12 != '\0')) {
        plVar8 = (longlong *)FUN_00e8fc40();
        FUN_000fdf90();
        (**(code **)(*plVar8 + 0x18))();
        pvVar6 = _pthread_getspecific(pVar9);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01320d00();
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        FUN_013fb180();
        if (local_58 != 0) {
          FUN_00d50b20();
        }
        FUN_01447a50();
        FUN_013fb350();
        (**(code **)(*plVar8 + 0x398))();
        FUN_01c4f640();
        FUN_00d50b20();
      }
      if (!(bool)(bVar2 | local_68 == 0)) {
        FUN_00d50b20();
      }
      goto LAB_01c784e2;
    }
  }
  cVar12 = '\0';
LAB_01c784e2:
  if ((bVar3) && (local_60 != 0)) {
    FUN_00d50b20();
  }
  return cVar12;
}


