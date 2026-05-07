// Function: FUN_0078bc40
// Address: 0078bc40
// Size: 1572 bytes
// Class: MUAraAudioSource


/* WARNING: Removing unreachable block (ram,0x0078bdf7) */
/* WARNING: Removing unreachable block (ram,0x0078be03) */
/* WARNING: Removing unreachable block (ram,0x0078c085) */
/* WARNING: Removing unreachable block (ram,0x0078c091) */
/* WARNING: Removing unreachable block (ram,0x0078bccb) */
/* WARNING: Removing unreachable block (ram,0x0078bcd7) */
/* WARNING: Removing unreachable block (ram,0x0078bd26) */
/* WARNING: Removing unreachable block (ram,0x0078bd32) */

longlong * FUN_0078bc40(void)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  void *pvVar7;
  longlong lVar8;
  char *pcVar9;
  pthread_key_t pVar10;
  char *pcVar11;
  int iVar12;
  longlong *unaff_RDI;
  int iVar13;
  int iVar14;
  longlong *local_d8;
  char local_d0;
  longlong local_80;
  char local_78 [8];
  longlong local_70;
  char local_68 [8];
  longlong local_60;
  undefined8 local_58;
  int local_50;
  char local_41;
  char local_40 [8];
  char local_38 [8];
  
  FUN_01f27fe0();
  local_41 = (**(code **)(*local_d8 + 0x450))();
  if ((local_d0 != '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  FUN_003b7950();
  if ((local_d0 == '\0') && (local_d8 != (longlong *)0x0)) {
    FUN_00d50b00();
  }
  FUN_0078b9c0();
  if (local_d0 == '\0') {
    if (local_d8 != (longlong *)0x0) {
      FUN_00d50b00();
      goto LAB_0078bd37;
    }
  }
  else if (local_d8 != (longlong *)0x0) {
LAB_0078bd37:
    iVar13 = -1;
    do {
      iVar13 = iVar13 + 1;
      iVar1 = *(int *)((longlong)local_d8 + 0xc);
      if (iVar1 <= iVar13) {
        FUN_000be170();
        goto LAB_0078c259;
      }
      lVar8 = *(longlong *)(local_d8[2] + (longlong)iVar13 * 8);
      FUN_004f9670();
      lVar4 = local_70;
      local_40[0] = local_68[0];
      pcVar11 = local_40;
      pcVar9 = local_68;
      if (local_68[0] == '\0') {
        pcVar9 = pcVar11;
      }
      *pcVar9 = '\0';
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      pVar10 = (pthread_key_t)pcVar11;
      pvVar7 = _pthread_getspecific(pVar10);
      if (pvVar7 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_004fae50();
      lVar5 = local_70;
      if (local_68[0] == '\0') {
        if (local_70 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_68[0] = '\0';
      }
      cVar6 = (**(code **)(*local_d8 + 0x50))();
      if (lVar5 != 0) {
        FUN_00d50b20();
      }
      if ((local_68[0] != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (cVar6 == '\0') {
        if (local_41 != '\0') {
          pvVar7 = _pthread_getspecific(pVar10);
          if (pvVar7 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_012e6160();
          lVar8 = local_70;
          if (local_68[0] == '\0') {
            if (local_70 != 0) {
              FUN_00d50b00();
              if ((local_68[0] != '\0') && (local_70 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_0078bf9e;
            }
          }
          else if (local_70 != 0) {
LAB_0078bf9e:
            local_68[0] = '\0';
            local_70 = 0;
            local_60 = lVar8;
            local_58 = 0xffffffff;
            local_50 = 0;
            local_58._4_4_ = 0;
            while( true ) {
              if (local_58._4_4_ != 0) {
                if (local_58._4_4_ < 1) {
                  iVar12 = -local_58._4_4_;
                }
                else {
                  iVar12 = (int)local_58 - local_58._4_4_;
                  local_58 = CONCAT44(local_58._4_4_,iVar12);
                  FUN_00d23690();
                  local_50 = local_50 + local_58._4_4_;
                  iVar12 = 0;
                }
                local_58 = CONCAT44(iVar12,(int)local_58);
              }
              lVar8 = (longlong)(int)local_58;
              iVar14 = (int)local_58 + 1;
              local_58 = CONCAT44(local_58._4_4_,iVar14);
              iVar12 = *(int *)(local_60 + 0xc);
              if (iVar12 <= iVar14) goto LAB_0078c1e3;
              local_70 = *(longlong *)(*(longlong *)(local_60 + 0x10) + 8 + lVar8 * 8);
              FUN_004f9670();
              local_38[0] = local_78[0];
              pcVar11 = local_38;
              pcVar9 = local_78;
              if (local_78[0] == '\0') {
                pcVar9 = pcVar11;
              }
              *pcVar9 = '\0';
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              pvVar7 = _pthread_getspecific((pthread_key_t)pcVar11);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              FUN_004fae50();
              if (local_78[0] == '\0') {
                if (local_80 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_78[0] = '\0';
              }
              cVar6 = (**(code **)(*local_d8 + 0x50))();
              if (local_80 != 0) {
                FUN_00d50b20();
              }
              if ((local_78[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              lVar8 = local_70;
              if (cVar6 != '\0') break;
              if ((local_38[0] != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
            }
            *(undefined1 *)(unaff_RDI + 1) = 0;
            if (local_68[0] == '\0') {
              if (local_70 != 0) {
                FUN_00d50b00();
              }
              *unaff_RDI = lVar8;
              *(undefined1 *)(unaff_RDI + 1) = 1;
            }
            else {
              *unaff_RDI = local_70;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              local_68[0] = '\0';
            }
            if ((local_38[0] != '\0') && (local_80 != 0)) {
              FUN_00d50b20();
            }
LAB_0078c1e3:
            FUN_000be170();
            FUN_00d50b20();
            if (iVar14 < iVar12) goto LAB_0078bf03;
          }
        }
        bVar3 = true;
        bVar2 = true;
      }
      else {
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if (lVar8 != 0) {
          FUN_00d50b00();
        }
        *unaff_RDI = lVar8;
        *(undefined1 *)(unaff_RDI + 1) = 1;
LAB_0078bf03:
        bVar3 = false;
        bVar2 = false;
      }
      if ((local_40[0] != '\0') && (bVar2 = bVar3, lVar4 != 0)) {
        FUN_00d50b20();
      }
    } while (bVar2);
    FUN_000be170();
LAB_0078c259:
    FUN_00d50b20();
    if (iVar13 < iVar1) goto LAB_0078c27d;
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_0078c27d:
  if (local_d8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


