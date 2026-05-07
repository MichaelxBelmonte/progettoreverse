// Function: FUN_00451580
// Address: 00451580
// Size: 975 bytes
// Class: MDMetaWindowController


/* WARNING: Removing unreachable block (ram,0x00451903) */
/* WARNING: Removing unreachable block (ram,0x00451910) */
/* WARNING: Removing unreachable block (ram,0x00451747) */
/* WARNING: Removing unreachable block (ram,0x00451750) */
/* WARNING: Removing unreachable block (ram,0x0045182b) */
/* WARNING: Removing unreachable block (ram,0x00451834) */

int FUN_00451580(void)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  void *pvVar5;
  ulonglong uVar6;
  int iVar7;
  longlong unaff_RDI;
  uint uVar8;
  longlong lVar9;
  longlong local_78;
  char local_70;
  longlong local_48;
  char local_40;
  int local_34;
  
  lVar2 = *(longlong *)(unaff_RDI + 0x240);
  if (lVar2 == 0) {
    local_34 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0xc) < 1) {
      bVar3 = false;
      lVar9 = 0;
      local_34 = 0;
    }
    else {
      uVar8 = 0;
      local_34 = 0;
      lVar9 = 0;
      bVar3 = false;
      do {
        uVar6 = (ulonglong)uVar8;
        pvVar5 = _pthread_getspecific(uVar8);
        if (pvVar5 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_012e8920();
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if (local_48 != 0) {
          if (lVar9 == 0) {
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8920();
            pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012cb450();
            if (local_48 == 0) {
              lVar9 = 0;
            }
            else {
              lVar9 = local_48;
              if (local_40 == '\0') {
                FUN_00d50b00();
                bVar3 = true;
              }
              else {
                local_40 = '\0';
                bVar3 = true;
              }
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
          }
          cVar1 = *(char *)(unaff_RDI + 0x248);
          pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
          if (cVar1 == '\0') {
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8b20();
          }
          else {
            if (pvVar5 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e8a60();
          }
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
LAB_00451840:
              iVar7 = 0;
              while( true ) {
                pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar4 = FUN_0124a860();
                if (iVar4 <= iVar7) break;
                pvVar5 = _pthread_getspecific((pthread_key_t)uVar6);
                if (pvVar5 != (void *)0x0) {
                  FUN_00e8b990();
                }
                iVar4 = FUN_01240ab0();
                if (local_34 < iVar4) {
                  local_34 = iVar4;
                }
                iVar7 = iVar7 + 1;
              }
              FUN_00d50b20();
            }
          }
          else if (local_48 != 0) goto LAB_00451840;
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < *(int *)(lVar2 + 0xc));
    }
    FUN_000be170();
    if ((bVar3) && (lVar9 != 0)) {
      FUN_00d50b20();
    }
  }
  return local_34;
}


